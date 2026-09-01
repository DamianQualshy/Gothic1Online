#ifndef CMASTERSERVERLIST_H
#define CMASTERSERVERLIST_H

#include <atomic>

#include <QObject>
#include <QThread>

#include "CServerInfo.h"

class CMasterServerList : public QObject
{
    Q_OBJECT

signals:
    void signalAddServer(CServerInfo serversInfo);
    void signalParseError();

public:
    CMasterServerList(QThread &thread);
    ~CMasterServerList();

    void setListData(const QString list);
    void threadStop();
    void threadRenew();

private:
    void initConnections(QThread &thread);

    QString m_List;
    std::atomic_bool m_ThreadRunning;

private slots:
    void onParseServerList();
};

#endif // CMASTERSERVERLIST_H
