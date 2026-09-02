#ifndef CRPCDOWNLOADER_H
#define CRPCDOWNLOADER_H

#include <QObject>

#include <Network/Packet.h>

class CRPCDownloader : public QObject
{
    Q_OBJECT

signals:
    void signalConnectionFailed();
    void signalCheckingFiles();

public:
    void connectionRequest(HSteamNetConnection connection);
    void connectionFailed();
    void cancelDownload(bool unfinished);
    bool handle(HSteamNetConnection connection, PacketReader& packet);
    bool isActive() const { return m_Active; }

private:
    bool receiveManifest(HSteamNetConnection connection, PacketReader& packet);

    HSteamNetConnection m_Connection = k_HSteamNetConnection_Invalid;
    bool m_Active = false;
};

#endif
