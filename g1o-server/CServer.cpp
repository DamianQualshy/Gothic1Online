#include "stdafx.h"

CServer::CServer()
{
	SPDLOG_INFO("-== Gothic Online Server {} ==-", versionString);
	//SPDLOG_TRACE("CServer::CServer()");
	//Inicjacja wszystkich elementów serwer'a
	pConfig = new CConfig();
	pNetwork = new CNetwork();
	pMultiplayer = new CMultiplayer();
	pStreamer = new CStreamer();
	pBan = new CBan();
	pScriptDownload = new CScriptDownload();

	serverDescription = pConfig->GetServerDescription();
	serverWorld = "WORLD.ZEN";
	serverHour = 8; serverMinute = 0; serverDay = 0;
	serverUnconscious = true;
	mobList.Clear();
};

CServer::~CServer()
{
	//SPDLOG_TRACE("CServer::~CServer()");

	delete pConfig;
	delete pNetwork;
	delete pMultiplayer;
	delete pStreamer;
	delete pBan;
	delete pScriptDownload;

};

void CServer::Start()
{
	if (!pConfig->IsValid())
	{
		SPDLOG_ERROR("Server startup stopped because config.xml is invalid");
		return;
	}

	//SPDLOG_TRACE("CServer::Start()");
	//Informacje o konfiguracji servera
	SPDLOG_INFO("[config] Server name: {}", GetConfig()->GetServerName().c_str());
	SPDLOG_INFO("[config] Server port: {}", GetConfig()->GetServerPort().c_str());
	SPDLOG_INFO("[config] Max slots: {}", GetConfig()->GetMaxSlots().c_str());
	SPDLOG_INFO("[config] Public server: {}", GetConfig()->GetServerPublic() ? "yes" : "no");
	for (const std::string& script : GetConfig()->GetScripts())
		SPDLOG_INFO("[config] Script: {}", script.c_str());
	SPDLOG_INFO("Loading scripts...");
	if (scr.StartScripts(pConfig->GetScripts()))
		SPDLOG_INFO("[script] Scripts loaded on the server");
	else
		return;
	SPDLOG_INFO("Starting network...");

	//Inicjacja sieci
	if( (this->pNetwork->InitNetwork()) == true )
	{
		//Downloader
		pScriptDownload->StartUp();
		//Wątek niewolniczy (streamer, lista graczy)
		tthread::thread slave(CServer::SlaveThread, (void*)NULL);
		slave.detach();
		this->MainThread(); //Główny wątek odbierający pakiety
	}
	else
		SPDLOG_ERROR("Failed to start network");
};

void CServer::SynchronizeTime()
{
	static std::uint64_t syncTime = g1o::network::NowMilliseconds() + 4000;

	if (g1o::network::NowMilliseconds() >= syncTime)
	{
		if (++serverMinute > 59)
		{
			serverMinute = 0;
			if (++serverHour > 23)
			{
				serverHour = 0;
				if (++serverDay > 6)
					serverDay = 0;
			}
		}

		syncTime = g1o::network::NowMilliseconds() + 4000;
	}
}

/*
	https://www.youtube.com/watch?v=DkaKR0H6klY
	Poletzam
	ma ktoś poratować fajom?
*/
void CServer::SlaveThread(void *arg)
{
	while( true )
	{
		if (core.GetConfig()->GetServerPublic())
			master.Pulse();

		g1o::network::Sleep(30);
	}
}

void CServer::MainThread()
{
	//SPDLOG_TRACE("CServer::Loop()");
	while( true )
	{
		playerManager.BroadcastPlayerList();
		playerManager.CheckPlayersTimedOverlays();
		pStreamer->Pulse();
		pScriptDownload->Pulse(pNetwork);
		SynchronizeTime();
		scr.OnTick();
		pNetwork->GetReceiver()->ReceivePackets(pNetwork);

		g1o::network::Sleep(1);
	}
};

void CServer::SetUnconscious(bool _enabled)
{
	serverUnconscious = _enabled;

	PacketWriter bStream;
	bStream.Write((std::uint8_t)GO_SCRIPT);
	bStream.Write((std::uint8_t)SCRIPT_UNCONSCIOUS);
	bStream.Write(serverUnconscious);

	pNetwork->SendToAll(bStream, k_nSteamNetworkingSend_Reliable);
}
