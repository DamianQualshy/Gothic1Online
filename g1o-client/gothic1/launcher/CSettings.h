#ifndef CSETTINGS_H
#define CSETTINGS_H

#include <QPair>
#include <QString>
#include <QVector>

class CSettings
{
public:
    typedef QPair<QString, QString> FavoriteServer;

    CSettings();

    void loadLauncherSettings();
    bool saveLauncherSettings();

    const QVector<FavoriteServer>& favoriteServers() const;
    void setFavoriteServers(const QVector<FavoriteServer> &servers);

private:
    bool loadConfig();
    bool saveConfig() const;
    void loadLegacySettings();
    void loadLegacyFavorites();

    QString m_Nickname;
    QString m_Language;
    int m_WindowX;
    int m_WindowY;

    QVector<FavoriteServer> m_FavoriteServers;
    bool m_Loaded;
};

#endif // CSETTINGS_H
