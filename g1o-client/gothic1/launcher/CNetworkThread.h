#ifndef CNETWORKTHREAD_H
#define CNETWORKTHREAD_H

#include <QObject>
#include <QString>
#include <QThread>

#include <Network/Packet.h>

#include <atomic>
#include <map>
#include <mutex>
#include <vector>

#include "RPC/CRPCInternet.h"
#include "RPC/CRPCFavorite.h"
#include "RPC/CRPCDownloader.h"
#include "CFileTransferCallback.h"

#define NETWORK CNetworkThread::getInstance()

class CNetworkThread : public QObject
{
    Q_OBJECT

signals:
    void signalDownloaderQuit();

public:
    ~CNetworkThread();
    static CNetworkThread& getInstance();

    CRPCInternet* getInternetRCP() { return &m_InternetRPC; }
    CRPCFavorite* getFavoriteRPC() { return &m_FavoriteRPC; }
    CRPCDownloader* getDownloaderRPC() { return &m_DownloaderRPC; }
    CFileTransferCallback* getFileTransferCallback() { return &m_FileTransferCallback; }

    bool start(QThread& thread);
    void setRunning(bool value);
    void requestServer(const QString& ipAddress, int port, int index);
    bool connectToServer(const QString& ipAddress, int port);
    void disconnectFromCurrent(bool unfinished = false);
    bool send(HSteamNetConnection connection, const PacketWriter& packet, int sendFlags = k_nSteamNetworkingSend_Reliable);

private:
    enum class Purpose { Query, Download };
    enum class CommandType { Query, Download, CloseDownload };

    struct Command
    {
        CommandType type;
        QString ipAddress;
        int port = 0;
        int index = 0;
        bool unfinished = false;
    };

    struct PendingConnection
    {
        Purpose purpose;
        QString ipAddress;
        int port = 0;
        int index = 0;
        std::uint64_t startedAt = 0;
        bool connected = false;
    };

    CNetworkThread();
    static void ConnectionStatusChangedCallback(SteamNetConnectionStatusChangedCallback_t* info);

    void onConnectionStatusChanged(SteamNetConnectionStatusChangedCallback_t* info);
    void initConnections(QThread& thread);
    void processCommands();
    void openConnection(const Command& command, Purpose purpose);
    void receiveMessages();
    void closeConnection(HSteamNetConnection connection, const char* reason);
    void failDownload(HSteamNetConnection connection);

    ISteamNetworkingSockets* m_Sockets = nullptr;
    std::map<HSteamNetConnection, PendingConnection> m_Connections;
    std::vector<Command> m_Commands;
    std::mutex m_CommandMutex;
    std::atomic_bool m_ThreadRunning{false};
    std::atomic_bool m_Initialized{false};
    CRPCInternet m_InternetRPC;
    CRPCFavorite m_FavoriteRPC;
    CRPCDownloader m_DownloaderRPC;
    CFileTransferCallback m_FileTransferCallback;

private slots:
    void handleNetwork();

    friend class CNetwork;
};

#endif
