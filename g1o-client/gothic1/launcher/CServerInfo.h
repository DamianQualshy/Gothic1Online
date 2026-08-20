#ifndef CSERVERINFO_H
#define CSERVERINFO_H

#include <QString>
#include <QTreeWidgetItem>

#include "ServerUnknow.h"

class CServerInfo
{
public:
    CServerInfo(QString ipAdress	  = ServerUnknow::IP_ADRESS,
                QString port 		  = ServerUnknow::PORT,
                QString hostName      = ServerUnknow::HOSTNAME,
                QString description   = ServerUnknow::DESCRIPTION,
                QString version       = ServerUnknow::VERSION,
                QString world         = ServerUnknow::WORLD,
                QString script        = ServerUnknow::SCRIPT,
                uint onlinePlayers 	  = ServerUnknow::ONLINE_PLAYERS,
                uint maxPlayers 	  = ServerUnknow::MAX_PLAYERS,
                uint ping		 	  = ServerUnknow::PING);

    inline QString  getHostName() const      { return m_HostName; }
    inline QString  getIpAdress() const      { return m_IpAdress; }
    inline QString  getPort() const          { return m_Port; }
    inline QString  getDescription() const   { return m_Description; }
    inline QString  getVersion() const       { return m_Version; }
    inline QString  getWorld() const         { return m_World; }
    inline QString  getScript() const        { return m_Script; }
    inline uint 	getOnlinePlayers() const { return m_OnlinePlayers; }
    inline uint 	getMaxPlayers() const    { return m_MaxPlayers; }
    inline uint 	getPing() const          { return m_Ping; }
    inline bool     exits() const            { return m_Exist; }
    inline bool     isShowed() const         { return m_IsShowed; }

private:
    QTreeWidgetItem *m_ptrItem;
    QString m_IpAdress, m_Port, m_HostName, m_Description, m_Version, m_World, m_Script;
    uint m_OnlinePlayers, m_MaxPlayers, m_Ping;
    bool m_IsShowed, m_Exist;

friend class CServerManager;
friend class CInternetManager;
friend class CFavoriteManager;
};

#endif // CSERVERINFO_H
