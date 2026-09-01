#include "PCH.h"

CInternetManager::CInternetManager() :
    m_MasterServerList(MASTER_SERVER_ENDPOINT),
    m_MsgBoxMasterServer(false),
    m_MsgBoxConnectionFailed(true),
    m_MasterServer(m_SplitThread)
{
#ifdef DEBUG_MODE
    SPDLOG_TRACE("{}", __FUNCTION__);
#endif
    initConnections();
}

CInternetManager::~CInternetManager()
{
#ifdef DEBUG_MODE
    SPDLOG_TRACE("{}", __FUNCTION__);
#endif
    clear();
    m_SplitThread.deleteLater();
}

//-------------------------------------------------------------------------------------------------------------------------------
//  Public method
//-------------------------------------------------------------------------------------------------------------------------------

void CInternetManager::translate()
{
    m_MsgBoxMasterServer.setWindowTitle("");
    m_MsgBoxMasterServer.setText(TRANSLATE("I_MASTER_LIST"));

    m_MsgBoxConnectionFailed.setWindowTitle("");
    m_MsgBoxConnectionFailed.setText(TRANSLATE("I_MASTER_ERROR"));
}

void CInternetManager::serverList()
{
    clear();

    if (m_MasterServerList.trimmed().isEmpty())
    {
        SPDLOG_ERROR("Master server endpoint is not configured");
        downloadError();
        return;
    }

    LAUNCHER.disable();

    LAUNCHER.getServerInternetManager()->clear();
    LAUNCHER.getNetwork().downloadFileFromUrl(m_MasterServerList);
    LAUNCHER.setStatus(TRANSLATE("I_MASTER_CONNECTING"));

    m_MsgBoxMasterServer.show();
}

void CInternetManager::clear()
{
    if (m_SplitThread.isRunning())
    {
        m_MasterServer.threadStop();

        m_SplitThread.quit();
        m_SplitThread.wait();

        m_MasterServer.threadRenew();
    }
}

//-------------------------------------------------------------------------------------------------------------------------------
//  Private method
//-------------------------------------------------------------------------------------------------------------------------------

void CInternetManager::initConnections()
{
    connect(&m_MasterServer, SIGNAL(signalAddServer(CServerInfo)),
            this, SLOT(onShowServer(CServerInfo)));

    connect(&m_MasterServer, SIGNAL(signalParseError()),
            this, SLOT(onMasterServerParseError()));
}

void CInternetManager::splitList(QString list)
{
    m_ServerList.clear();
    m_MasterServer.setListData(list);
    m_SplitThread.start();
    m_MsgBoxMasterServer.close();

    LAUNCHER.setStatus(TRANSLATE("SB_NO_SERVERS"));
    LAUNCHER.enable();
}

void CInternetManager::downloadError()
{
    LAUNCHER.enable();

    m_MsgBoxMasterServer.close();
    m_MsgBoxConnectionFailed.show();
}

void CInternetManager::addServer(QString ipAdress, int port, int ping)
{
    QString mapIndex = ipAdress + ":" + TOSTRING(port);
    if (!m_ServerList.contains(mapIndex)) return;

    const uint measuredPing = ping < 0 ? 0u : static_cast<uint>(ping);
    m_ServerList[mapIndex].m_Ping = measuredPing;

    LAUNCHER.getServerInternetManager()->updatePing(ipAdress, TOSTRING(port), measuredPing);
}

void CInternetManager::updateServer(QString ipAdress, QString port, QString hostName, QString script, QString version,
                                    QString world, QString description, int onlinePlayers, int maxPlayers, int ping)
{
    const QString mapIndex = ipAdress + ":" + port;
    if (!m_ServerList.contains(mapIndex))
        return;

    CServerInfo& server = m_ServerList[mapIndex];
    server.m_HostName = hostName;
    server.m_Script = script;
    server.m_Version = version;
    server.m_World = world;
    server.m_Description = description;
    server.m_OnlinePlayers = onlinePlayers < 0 ? 0u : static_cast<uint>(onlinePlayers);
    server.m_MaxPlayers = maxPlayers < 0 ? 0u : static_cast<uint>(maxPlayers);
    server.m_Ping = ping < 0 ? ServerUnknow::PING : static_cast<uint>(ping);

    LAUNCHER.getServerInternetManager()->updateServer(server);
}

//-------------------------------------------------------------------------------------------------------------------------------
//  Private slots
//-------------------------------------------------------------------------------------------------------------------------------

void CInternetManager::onShowServer(CServerInfo serverInfo)
{
    QString mapIndex = serverInfo.getIpAdress() + ":" + serverInfo.getPort();
    m_ServerList[mapIndex] = serverInfo;

    SPDLOG_INFO("[master] Listed server {}:{} ({})", serverInfo.getIpAdress().toStdString(),
                serverInfo.getPort().toStdString(), serverInfo.getHostName().toStdString());

    CServerManager* serverManager = LAUNCHER.getServerInternetManager();
    serverManager->addServer(serverInfo);
    LAUNCHER.setStatus(QString(TRANSLATE("SB_AVAIABLE_SERVERS")).arg(serverManager->getServerList().size()));

    LAUNCHER.getNetwork().sendRequest(serverInfo.getIpAdress(), serverInfo.getPort().toInt(), INDEX_INTERNET);
}

void CInternetManager::onMasterServerParseError()
{
    downloadError();
}
