#include "PCH.h"

CFavoriteManager::CFavoriteManager(QObject *parent) :
    QObject(parent),
    m_TempEdit(NULL)
{
#ifdef DEBUG_MODE
    LOG(__FUNCTION__)
#endif
    initConnections();
}

CFavoriteManager::~CFavoriteManager()
{
#ifdef DEBUG_MODE
    LOG(__FUNCTION__)
#endif
    saveFavoriteList();
}

//-------------------------------------------------------------------------------------------------------------------------------
//  Public method
//-------------------------------------------------------------------------------------------------------------------------------

void CFavoriteManager::translate()
{
    m_Add.setWindowTitle(TRANSLATE("F_WADD"));
    m_Edit.setWindowTitle(TRANSLATE("F_WREMOVE"));

    m_Add.translate();
    m_Edit.translate();
}

void CFavoriteManager::saveFavoriteList()
{
    QVector<CSettings::FavoriteServer> servers;
    for (const FavoriteServer &server : m_ListFavorite)
        servers.append(CSettings::FavoriteServer(server.m_IP, server.m_Port));
    LAUNCHER.getSettings().setFavoriteServers(servers);
}

void CFavoriteManager::loadFavoriteList()
{
    for (const CSettings::FavoriteServer &server : LAUNCHER.getSettings().favoriteServers())
    {
        LAUNCHER.getServerFavoriteManager()->addServer(CServerInfo(server.first, server.second));
        m_ListFavorite.append(FavoriteServer(server.first, server.second));
    }
}

void CFavoriteManager::serverList()
{
    LAUNCHER.getServerFavoriteManager()->refreshList(true);
    LAUNCHER.getNetwork().sendRequest(LAUNCHER.getServerFavoriteManager()->getServerList(), INDEX_FAVORITE);
}

//-------------------------------------------------------------------------------------------------------------------------------
//  Private method
//-------------------------------------------------------------------------------------------------------------------------------

void CFavoriteManager::initConnections()
{
    connect(&m_Add, SIGNAL(signalButtonOkClicked(QString,QString)),
            this, SLOT(onFavoriteAdd(QString,QString)));

    connect(&m_Edit, SIGNAL(signalButtonOkClicked(QString,QString)),
            this, SLOT(onFavoriteEdit(QString,QString)));
}

//-------------------------------------------------------------------------------------------------------------------------------
//  Private slots
//-------------------------------------------------------------------------------------------------------------------------------

void CFavoriteManager::onButtonAddClicked()
{
    m_Add.show();
}

void CFavoriteManager::onButtonEditClicked()
{
    QTreeWidgetItem *server = LAUNCHER.getUI()->treeFavorite->currentItem();
    if (!server) return;

    m_TempEdit = server;

    m_Edit.ui->editIP->setText(server->text(1) + ":" + server->text(2));
    m_Edit.show();
}

void CFavoriteManager::onButtonRemoveClicked()
{
    QTreeWidgetItem *server = LAUNCHER.getUI()->treeFavorite->currentItem();
    if (!server) return;

    m_ListFavorite.removeOne(FavoriteServer(server->text(1), server->text(2)));
    LAUNCHER.getServerFavoriteManager()->removeServer(server->text(1), server->text(2));
    saveFavoriteList();
}

void CFavoriteManager::onFavoriteAdd(QString host, QString port)
{
    LAUNCHER.getServerFavoriteManager()->addServer(CServerInfo(host, port));

    if (!m_ListFavorite.contains(FavoriteServer(host, port)))
    {
        m_ListFavorite.append(FavoriteServer(host, port));
        saveFavoriteList();
    }
}

void CFavoriteManager::onFavoriteEdit(QString host, QString port)
{
    int index = m_ListFavorite.indexOf(FavoriteServer(m_TempEdit->text(1), m_TempEdit->text(2)));
    if (index != -1)
    {
        m_ListFavorite[index].m_IP = host;
        m_ListFavorite[index].m_Port = port;
    }

    LAUNCHER.getServerFavoriteManager()->editServer(m_TempEdit->text(1), m_TempEdit->text(2), host, port);
    saveFavoriteList();
}
