#include "PCH.h"

#include <Network/GOMessages.h>

#include <algorithm>
#include <limits>

CNetworkThread::CNetworkThread() = default;
CNetworkThread::~CNetworkThread() = default;

bool CNetworkThread::start(QThread& thread)
{
    SteamDatagramErrMsg error{};
    if (!GameNetworkingSockets_Init(nullptr, error))
    {
        SPDLOG_ERROR("[network] GameNetworkingSockets initialization failed: {}", error);
        return false;
    }

    m_Sockets = SteamNetworkingSockets();
    if (!m_Sockets)
    {
        GameNetworkingSockets_Kill();
        SPDLOG_ERROR("[network] GameNetworkingSockets interface is unavailable");
        return false;
    }

    m_Initialized = true;
    m_ThreadRunning = true;
    initConnections(thread);
    moveToThread(&thread);
    thread.start();
    return true;
}

void CNetworkThread::setRunning(bool value)
{
    m_ThreadRunning = value;
}

void CNetworkThread::requestServer(const QString& ipAddress, int port, int index)
{
    std::lock_guard lock(m_CommandMutex);
    m_Commands.push_back({CommandType::Query, ipAddress, port, index, false});
}

bool CNetworkThread::connectToServer(const QString& ipAddress, int port)
{
    if (!m_Initialized || port < 1 || port > 65535)
        return false;
    std::lock_guard lock(m_CommandMutex);
    m_Commands.push_back({CommandType::Download, ipAddress, port, 0, false});
    return true;
}

void CNetworkThread::disconnectFromCurrent(bool unfinished)
{
    std::lock_guard lock(m_CommandMutex);
    m_Commands.push_back({CommandType::CloseDownload, {}, 0, 0, unfinished});
}

bool CNetworkThread::send(HSteamNetConnection connection, const PacketWriter& packet, int sendFlags)
{
    if (!m_Sockets || connection == k_HSteamNetConnection_Invalid || packet.Empty())
        return false;
    return m_Sockets->SendMessageToConnection(
        connection, packet.Data(), packet.Size(), sendFlags, nullptr) == k_EResultOK;
}

CNetworkThread& CNetworkThread::getInstance()
{
    static CNetworkThread instance;
    return instance;
}

void CNetworkThread::ConnectionStatusChangedCallback(SteamNetConnectionStatusChangedCallback_t* info)
{
    NETWORK.onConnectionStatusChanged(info);
}

void CNetworkThread::onConnectionStatusChanged(SteamNetConnectionStatusChangedCallback_t* info)
{
    const auto iterator = m_Connections.find(info->m_hConn);
    if (iterator == m_Connections.end())
        return;

    PendingConnection& pending = iterator->second;
    switch (info->m_info.m_eState)
    {
    case k_ESteamNetworkingConnectionState_Connected:
    {
        pending.connected = true;
        const auto elapsed = g1o::network::NowMilliseconds() - pending.startedAt;
        const int ping = static_cast<int>(std::min<std::uint64_t>(elapsed, std::numeric_limits<int>::max()));
        PacketWriter request;
        if (pending.purpose == Purpose::Query)
        {
            if (pending.index == INDEX_INTERNET)
                m_InternetRPC.serverReached(pending.ipAddress, pending.port, ping);
            request.Write(GO_LAUNCHER);
        }
        else
        {
            m_DownloaderRPC.connectionRequest(info->m_hConn);
            request.Write(GO_FILE_TRANSFER);
            request.Write(FILE_MANIFEST_REQUEST);
        }
        if (!send(info->m_hConn, request))
        {
            if (pending.purpose == Purpose::Download)
                failDownload(info->m_hConn);
            else
                closeConnection(info->m_hConn, "Query send failed");
        }
        break;
    }
    case k_ESteamNetworkingConnectionState_ClosedByPeer:
    case k_ESteamNetworkingConnectionState_ProblemDetectedLocally:
        if (pending.purpose == Purpose::Download)
            m_DownloaderRPC.connectionFailed();
        m_Sockets->CloseConnection(info->m_hConn, 0, nullptr, false);
        m_Connections.erase(iterator);
        break;
    default:
        break;
    }
}

void CNetworkThread::initConnections(QThread& thread)
{
    connect(&thread, SIGNAL(started()), this, SLOT(handleNetwork()));
}

void CNetworkThread::processCommands()
{
    std::vector<Command> commands;
    {
        std::lock_guard lock(m_CommandMutex);
        commands.swap(m_Commands);
    }

    for (const Command& command : commands)
    {
        if (command.type == CommandType::Query)
            openConnection(command, Purpose::Query);
        else if (command.type == CommandType::Download)
            openConnection(command, Purpose::Download);
        else
        {
            std::vector<HSteamNetConnection> downloads;
            for (const auto& [connection, pending] : m_Connections)
                if (pending.purpose == Purpose::Download)
                    downloads.push_back(connection);
            m_DownloaderRPC.cancelDownload(command.unfinished);
            for (HSteamNetConnection connection : downloads)
                closeConnection(connection, "Download closed");
            emit signalDownloaderQuit();
        }
    }
}

void CNetworkThread::openConnection(const Command& command, Purpose purpose)
{
    if (!m_Sockets || command.port < 1 || command.port > 65535)
    {
        if (purpose == Purpose::Download)
            m_DownloaderRPC.connectionFailed();
        return;
    }

    SteamNetworkingIPAddr address;
    address.Clear();
    QString host = command.ipAddress.trimmed();
    if (host.contains(':') && !host.startsWith('['))
        host = '[' + host + ']';
    const QByteArray endpoint = (host + ':' + QString::number(command.port)).toUtf8();
    if (!address.ParseString(endpoint.constData()))
    {
        SPDLOG_WARN("[network] Invalid server endpoint {}", endpoint.constData());
        if (purpose == Purpose::Download)
            m_DownloaderRPC.connectionFailed();
        return;
    }

    SteamNetworkingConfigValue_t option;
    option.SetPtr(k_ESteamNetworkingConfig_Callback_ConnectionStatusChanged,
                  reinterpret_cast<void*>(ConnectionStatusChangedCallback));
    const HSteamNetConnection connection = m_Sockets->ConnectByIPAddress(address, 1, &option);
    if (connection == k_HSteamNetConnection_Invalid)
    {
        if (purpose == Purpose::Download)
            m_DownloaderRPC.connectionFailed();
        return;
    }
    m_Connections.emplace(connection, PendingConnection{
        purpose, command.ipAddress, command.port, command.index, g1o::network::NowMilliseconds(), false});
}

void CNetworkThread::receiveMessages()
{
    std::vector<HSteamNetConnection> connections;
    connections.reserve(m_Connections.size());
    for (const auto& entry : m_Connections)
        connections.push_back(entry.first);

    for (HSteamNetConnection connection : connections)
    {
        auto pendingIterator = m_Connections.find(connection);
        if (pendingIterator == m_Connections.end())
            continue;

        ISteamNetworkingMessage* messages[32]{};
        int count = 0;
        while ((count = m_Sockets->ReceiveMessagesOnConnection(connection, messages, 32)) > 0)
        {
            bool close = false;
            for (int i = 0; i < count; ++i)
            {
                ISteamNetworkingMessage* message = messages[i];
                PacketReader packet(message->m_pData, static_cast<std::size_t>(message->m_cbSize));
                EMultiplayerMessages category{};
                const bool validCategory = packet.Read(category);
                pendingIterator = m_Connections.find(connection);
                if (validCategory && pendingIterator != m_Connections.end())
                {
                    PendingConnection& pending = pendingIterator->second;
                    const auto elapsed = g1o::network::NowMilliseconds() - pending.startedAt;
                    const int ping = static_cast<int>(std::min<std::uint64_t>(elapsed, std::numeric_limits<int>::max()));
                    if (pending.purpose == Purpose::Query && category == GO_LAUNCHER)
                    {
                        if (pending.index == INDEX_INTERNET)
                            m_InternetRPC.serverInformation(pending.ipAddress, pending.port, ping, packet);
                        else if (pending.index == INDEX_FAVORITE)
                            m_FavoriteRPC.serverInformation(pending.ipAddress, pending.port, ping, packet);
                        close = true;
                    }
                    else if (pending.purpose == Purpose::Download && category == GO_FILE_TRANSFER)
                    {
                        if (!m_DownloaderRPC.handle(connection, packet))
                            close = true;
                    }
                }
                message->Release();
            }
            if (close)
            {
                pendingIterator = m_Connections.find(connection);
                if (pendingIterator != m_Connections.end() && pendingIterator->second.purpose == Purpose::Download && m_DownloaderRPC.isActive())
                    m_DownloaderRPC.connectionFailed();
                closeConnection(connection, "Request complete");
                break;
            }
        }
    }
}

void CNetworkThread::closeConnection(HSteamNetConnection connection, const char* reason)
{
    if (m_Sockets)
        m_Sockets->CloseConnection(connection, 0, reason, false);
    m_Connections.erase(connection);
}

void CNetworkThread::failDownload(HSteamNetConnection connection)
{
    m_DownloaderRPC.connectionFailed();
    closeConnection(connection, "Resource synchronization failed");
}

void CNetworkThread::handleNetwork()
{
    while (m_ThreadRunning)
    {
        processCommands();
        receiveMessages();
        m_Sockets->RunCallbacks();

        const std::uint64_t now = g1o::network::NowMilliseconds();
        std::vector<HSteamNetConnection> expired;
		for (const auto& [connection, pending] : m_Connections)
			if ((!pending.connected || pending.purpose == Purpose::Query) && now - pending.startedAt > 8000)
                expired.push_back(connection);
        for (HSteamNetConnection connection : expired)
        {
            const auto iterator = m_Connections.find(connection);
            if (iterator != m_Connections.end() && iterator->second.purpose == Purpose::Download)
                m_DownloaderRPC.connectionFailed();
            closeConnection(connection, "Connection timed out");
        }
        g1o::network::Sleep(10);
    }

    for (const auto& entry : m_Connections)
        m_Sockets->CloseConnection(entry.first, 0, "Launcher shutdown", false);
    m_Connections.clear();
    m_Sockets = nullptr;
    m_Initialized = false;
    GameNetworkingSockets_Kill();
}
