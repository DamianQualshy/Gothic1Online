#ifndef CRPC_FAVORITE_H
#define CRPC_FAVORITE_H

#include <QObject>
#include <QString>
#include <QTimer>

#include <Network/Packet.h>

class CRPCFavorite : public QObject
{
    Q_OBJECT

signals:
    void signalFillUnknownServers();
    void signalServerInformation(QString ipAdress, QString port, QString hostName, QString script, QString version,
                                 QString world, QString description, int onlinePlayers, int maxPlayers, int ping);

public:
    CRPCFavorite();
    void enableRefreshTimer(bool value);
    void serverInformation(const QString& ipAddress, int port, int ping, PacketReader& packet);

private:
    QTimer m_TimerRefresh;

private slots:
    void onTimerRefresh();
};

#endif
