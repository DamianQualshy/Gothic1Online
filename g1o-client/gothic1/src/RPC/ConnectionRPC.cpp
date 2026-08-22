#include "..\\stdafx.h"

void ConnectionRPC::HandleConnectionRPC(CNetwork* network, Packet* packet)
{
	DLOG("ConnectionRPC::HandleConnectionRPC()");
	BitStream stream(packet->data,packet->length,false);
	stream.IgnoreBytes(1);

	MessageID eConnectionRPC;
	stream.Read(eConnectionRPC);

	switch(eConnectionRPC)
	{
	case ACCEPT_CONNECTION: AcceptConnection(network,stream); break;
	case INCORRECT_VERSION: IncorrectVersion(network); break;
	case SERVER_FULL: ServerFull(network); break;
	case NICKNAME_USED: NicknameUsed(network); break;
	}

};

void ConnectionRPC::CatchConnection(CNetwork* network, Packet* packet)
{
	DLOG("ConnectionRPC::CatchConnection()");
	network->InitServerAddress(packet->systemAddress);
	CConfig* cfg = core.GetConfig();
	zVEC3 pos = oCNpc::GetHero()->GetPosition(); //Hardcoded BITCH

	BitStream stream;
	stream.Write((MessageID)GO_CONNECTION);
	stream.Write((MessageID)PLEASE_CONNECT);
	stream.Write(versionNumber);
	// Keep the legacy field in the wire format so existing protocol 226 peers
	// remain aligned. The server no longer treats a GO.dll hash as identity.
	stream.Write(RakString(""));
	stream.Write(cfg->GetPlayerName());
	stream.Write(cfg->GetStartWorld());
	stream.Write(pos[0]);
	stream.Write(pos[1]);
	stream.Write(pos[2]);
	
	network->GetPeer()->Send(&stream,HIGH_PRIORITY,RELIABLE,NULL,network->GetServerAddress(),false);
	network->GetPeer()->Ping(network->GetServerAddress());
#ifdef COOP
	//oCGame::GetGame()->GetSpawnManager()->SetSpawningEnabled(1); //Włącza npc
#endif //COOP
	
	
};

void ConnectionRPC::LostConnection(CNetwork* network, Packet* packet)
{
	DLOG("ConnectionRPC::LostConnection()");
	core.GetChat()->AddLine(RakString(ClientLanguage::Get(EClientText::ConnectionLost, core.GetConfig()->GetLanguage())), zCOLOR(255, 0, 0, 255));
	network->Disconnect();
};

void ConnectionRPC::Disconnection(CNetwork* network, Packet* packet)
{
	DLOG("ConnectionRPC::Disconnection()");
	core.GetChat()->AddLine(RakString(ClientLanguage::Get(EClientText::ServerClosedConnection, core.GetConfig()->GetLanguage())), zCOLOR(255,0,0,255));
	network->Disconnect();
};

void ConnectionRPC::AcceptConnection(CNetwork* network, BitStream& stream)
{
	DLOG("ConnectionRPC::AcceptConnection()");
	CMultiplayer* m = core.GetMultiplayer();
	int hour, minute, day;
	bool unconscious;

	stream.Read(m->hostName);
	stream.Read(m->myID);
	stream.Read(hour);
	stream.Read(minute);
	stream.Read(day);
	stream.Read(unconscious);

	// Time sync
	oCGame::GetGame()->SetTime(day, hour, minute);

	// Unconscious
	scr.GetScriptVars()->isUnconsciousEnabled = unconscious;

	core.GetChat()->AddLine(RakString(ClientLanguage::Get(EClientText::ConnectedJoining, core.GetConfig()->GetLanguage()), m->hostName.C_String()), zCOLOR(0, 255, 0, 255));

	network->bConnected = true;
};

void ConnectionRPC::IncorrectVersion(CNetwork* network)
{
	DLOG("ConnectionRPC::IncorrectVersion()");

	core.GetChat()->AddLine(RakString(ClientLanguage::Get(EClientText::IncorrectVersion, core.GetConfig()->GetLanguage())), zCOLOR(255,0,0,255));
	network->Disconnect();
};

void ConnectionRPC::ServerFull(CNetwork* network)
{
	DLOG("ConnectionRPC::ServerFull()");

	core.GetChat()->AddLine(RakString(ClientLanguage::Get(EClientText::ServerFull, core.GetConfig()->GetLanguage())), zCOLOR(255,0,0,255));
	network->Disconnect();
};

void ConnectionRPC::NicknameUsed(CNetwork* network)
{
	DLOG("ConnectionRPC::NicknameUsed()");

	core.GetChat()->AddLine(RakString(ClientLanguage::Get(EClientText::NicknameUsed, core.GetConfig()->GetLanguage())), zCOLOR(255,0,0,255));
	network->Disconnect();
};

void ConnectionRPC::Banned(CNetwork* network)
{
	DLOG("ConnectionRPC::Banned()");

	core.GetChat()->AddLine(RakString(ClientLanguage::Get(EClientText::Banned, core.GetConfig()->GetLanguage())), zCOLOR(255,0,0,255));
	network->Disconnect();
};

void ConnectionRPC::DisconnectedWithReason(CNetwork* network, BitStream& stream)
{
	DLOG("ConnectionRPC::DisconnectedWithReason()");

	RakString reason;
	stream.Read(reason);

	core.GetChat()->AddLine(RakString(ClientLanguage::Get(EClientText::Disconnected, core.GetConfig()->GetLanguage()), reason.C_String()), zCOLOR(255,0,0,255));
	network->Disconnect();
};

void ConnectionRPC::ConnectionFailed(CNetwork* network)
{
	DLOG("ConnectionRPC::ConnectionFailed()");

	core.GetChat()->AddLine(RakString(ClientLanguage::Get(EClientText::ConnectionFailed, core.GetConfig()->GetLanguage())), zCOLOR(255,0,0,255));
	network->Disconnect();
};
