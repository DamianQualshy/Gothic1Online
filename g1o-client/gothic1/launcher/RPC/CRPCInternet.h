#ifndef CRPCINTERNET_H
#define CRPCINTERNET_H

#include <QObject>
#include <QQueue>

#include "RakNetInclude.h"

class CRPCInternet : public QObject
{
    Q_OBJECT

signals:
    void signalServerPing(QString ipAdress, int port, int ping);
    void signalServerInformation(QString ipAdress, QString port, QString hostName, QString script, QString version,
                                 QString world, QString description, int onlinePlayers, int maxPlayers, int ping);

public:
    CRPCInternet();

    void handlePacket(RakNet::Packet *packet);

private:
    void connectionFailed(RakNet::Packet *packet);
    void connectionRequest(RakNet::Packet *packet);
    void disconnected(RakNet::Packet *packet);
    void serverReached(RakNet::Packet *packet);
    void serverInformation(RakNet::Packet *packet);
    void getInformation();
    void finishGettingInformation();

    struct Server
    {
        QString ipAddress;
        int port;
    };

    QQueue<Server> m_ServerQueue;
    bool m_CheckingServer;
};

#endif // CRPCINTERNET_H
