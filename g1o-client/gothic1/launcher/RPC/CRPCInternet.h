#ifndef CRPCINTERNET_H
#define CRPCINTERNET_H

#include <QObject>
#include <QString>

#include <Network/Packet.h>

class CRPCInternet : public QObject
{
    Q_OBJECT

signals:
    void signalServerPing(QString ipAdress, int port, int ping);
    void signalServerInformation(QString ipAdress, QString port, QString hostName, QString script, QString version,
                                 QString world, QString description, int onlinePlayers, int maxPlayers, int ping);

public:
    void serverReached(const QString& ipAddress, int port, int ping);
    void serverInformation(const QString& ipAddress, int port, int ping, PacketReader& packet);
};

#endif
