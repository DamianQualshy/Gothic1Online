#include <QDesktopWidget>
#include <QDir>
#include <QFile>
#include <QFileInfo>
#include <QSaveFile>
#include <QSettings>
#include <QXmlStreamReader>
#include <QXmlStreamWriter>

#include "PCH.h"

CSettings::CSettings() :
    m_Nickname(SettingUnknow::NAME),
    m_Language("en"),
    m_WindowX(-1),
    m_WindowY(-1),
    m_ServerIp("127.0.0.1"),
    m_ServerPort(QString::number(DEFAULT_PORT)),
    m_StartWorld("WORLD.ZEN"),
    m_PlayerInstance("PC_HERO"),
    m_ClientScript("client-main.gm"),
    m_Loaded(false)
{
#ifdef DEBUG_MODE
    LOG(__FUNCTION__)
#endif
    qApp->setApplicationName(APP_NAME);
}

//-------------------------------------------------------------------------------------------------------------------------------
//  Public method
//-------------------------------------------------------------------------------------------------------------------------------

void CSettings::loadLauncherSettings()
{
    loadConfig();

    QDesktopWidget *desktop = QApplication::desktop();

    LAUNCHER.getUI()->editNickname->setText(m_Nickname);
    LAUNCHER.move(m_WindowX >= 0 ? m_WindowX : (desktop->width() / 2) - (LAUNCHER.width() / 2),
                  m_WindowY >= 0 ? m_WindowY : (desktop->height() / 2) - (LAUNCHER.height() / 2));
    LAUNCHER.getLanguage().setCurrentLang(m_Language);
}

void CSettings::saveLauncherSettings()
{
    m_Nickname = LAUNCHER.getUI()->editNickname->text().isEmpty() ? SettingUnknow::NAME : LAUNCHER.getUI()->editNickname->text();
    m_WindowX = LAUNCHER.x();
    m_WindowY = LAUNCHER.y();
    m_Language = LAUNCHER.getLanguage().getCurrentLang().isEmpty() ? "en" : LAUNCHER.getLanguage().getCurrentLang();
    saveConfig();
}

bool CSettings::saveConnectionSettings(const QString &ipAddress,
                                       const QString &port,
                                       const QString &world,
                                       const QString &playerInstance,
                                       const QString &clientScript)
{
    m_Nickname = LAUNCHER.getUI()->editNickname->text().isEmpty() ? SettingUnknow::NAME : LAUNCHER.getUI()->editNickname->text();
    m_Language = LAUNCHER.getLanguage().getCurrentLang().isEmpty() ? "en" : LAUNCHER.getLanguage().getCurrentLang();
    m_ServerIp = ipAddress;
    m_ServerPort = port;
    m_StartWorld = world;
    m_PlayerInstance = playerInstance;
    m_ClientScript = clientScript;
    return saveConfig();
}

const QVector<CSettings::FavoriteServer>& CSettings::favoriteServers() const
{
    return m_FavoriteServers;
}

void CSettings::setFavoriteServers(const QVector<FavoriteServer> &servers)
{
    m_FavoriteServers = servers;
    saveConfig();
}

bool CSettings::loadConfig()
{
    if (m_Loaded)
        return true;

    m_Loaded = true;
    bool loadedUnifiedConfig = false;
    bool hasNickname = false;
    bool hasLanguage = false;
    bool hasWindowX = false;
    bool hasWindowY = false;
    bool hasFavoritesSection = false;

    QFile file(CONFIG_PATH);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QXmlStreamReader xml(&file);
        QString section;
        bool hasConfigRoot = false;

        while (!xml.atEnd())
        {
            xml.readNext();
            if (xml.isStartElement())
            {
                const QString name = xml.name().toString();
                if (name == "GO_Config")
                {
                    hasConfigRoot = true;
                }
                else if (name == "favorites")
                {
                    section = name;
                    hasFavoritesSection = true;
                }
                else if (name == "server" && section == "favorites")
                {
                    const QString ip = xml.attributes().value("ip").toString();
                    const QString port = xml.attributes().value("port").toString();
                    if (!ip.isEmpty() && !port.isEmpty())
                        m_FavoriteServers.append(FavoriteServer(ip, port));
                }
                else if (name == "playerName")
                {
                    m_Nickname = xml.readElementText();
                    hasNickname = true;
                }
                else if (name == "lang")
                {
                    m_Language = xml.readElementText().toLower();
                    hasLanguage = true;
                }
                else if (name == "launcherPosX")
                {
                    m_WindowX = xml.readElementText().toInt();
                    hasWindowX = true;
                }
                else if (name == "launcherPosY")
                {
                    m_WindowY = xml.readElementText().toInt();
                    hasWindowY = true;
                }
                else if (name == "serverIp")
                    m_ServerIp = xml.readElementText();
                else if (name == "serverPort")
                    m_ServerPort = xml.readElementText();
                else if (name == "startWorld")
                    m_StartWorld = xml.readElementText();
                else if (name == "playerInstance")
                    m_PlayerInstance = xml.readElementText();
                else if (name == "clientScript")
                    m_ClientScript = xml.readElementText();
            }
            else if (xml.isEndElement() && xml.name().toString() == section)
                section.clear();
        }

        loadedUnifiedConfig = hasConfigRoot && !xml.hasError();
        file.close();
    }

    const bool hasLauncherData = hasNickname && hasLanguage && hasWindowX && hasWindowY;
    if (!loadedUnifiedConfig || !hasLauncherData)
        loadLegacySettings();
    if (!loadedUnifiedConfig || !hasFavoritesSection)
        loadLegacyFavorites();

    if (!loadedUnifiedConfig || !hasLauncherData || !hasFavoritesSection)
        saveConfig();

    return loadedUnifiedConfig;
}

bool CSettings::saveConfig() const
{
    QDir().mkpath(QFileInfo(CONFIG_PATH).path());

    QSaveFile file(CONFIG_PATH);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
        return false;

    QXmlStreamWriter xml(&file);
    xml.setAutoFormatting(true);
    xml.writeStartDocument();
    xml.writeComment(" Gothic Online client configuration. All available client and launcher options are listed below. ");
    xml.writeStartElement("GO_Config");

    // Keep G2O's flat GO_Config field layout. Favorites are the only grouped
    // collection because they contain a variable number of server entries.
    xml.writeTextElement("playerName", m_Nickname);
    xml.writeTextElement("serverIp", m_ServerIp);
    xml.writeTextElement("serverPort", m_ServerPort);
    xml.writeTextElement("startWorld", m_StartWorld);
    xml.writeTextElement("playerInstance", m_PlayerInstance);
    xml.writeTextElement("clientScript", m_ClientScript);
    xml.writeTextElement("lang", m_Language);
    xml.writeTextElement("launcherPosX", QString::number(m_WindowX));
    xml.writeTextElement("launcherPosY", QString::number(m_WindowY));

    xml.writeStartElement("favorites");
    for (const FavoriteServer &server : m_FavoriteServers)
    {
        xml.writeStartElement("server");
        xml.writeAttribute("ip", server.first);
        xml.writeAttribute("port", server.second);
        xml.writeEndElement();
    }
    xml.writeEndElement();

    xml.writeEndElement();
    xml.writeEndDocument();
    return file.commit();
}

void CSettings::loadLegacySettings()
{
    QSettings legacy(LEGACY_SETTINGS_PATH, QSettings::IniFormat);
    if (!QFileInfo(LEGACY_SETTINGS_PATH).exists())
        return;

    m_Nickname = legacy.value("nickname", m_Nickname).toString();
    m_Language = legacy.value("lang", m_Language).toString().toLower();
    m_WindowX = legacy.value("pos-x", m_WindowX).toInt();
    m_WindowY = legacy.value("pos-y", m_WindowY).toInt();
}

void CSettings::loadLegacyFavorites()
{
    QFile file(LEGACY_FAVORITE_PATH);
    if (!file.open(QIODevice::ReadOnly))
        return;

    qint32 count = 0;
    if (file.read(reinterpret_cast<char*>(&count), sizeof(count)) != sizeof(count) || count < 0 || count > 10000)
        return;

    for (qint32 index = 0; index < count; ++index)
    {
        qint32 ipLength = 0;
        qint32 portLength = 0;
        if (file.read(reinterpret_cast<char*>(&ipLength), sizeof(ipLength)) != sizeof(ipLength) || ipLength <= 0 || ipLength > 255)
            return;

        QByteArray ip = file.read(ipLength);
        if (ip.size() != ipLength)
            return;
        for (int i = 0; i < ip.size(); ++i)
            ip[i] = ip.at(i) ^ 0x1E;

        if (file.read(reinterpret_cast<char*>(&portLength), sizeof(portLength)) != sizeof(portLength) || portLength <= 0 || portLength > 16)
            return;
        QByteArray port = file.read(portLength);
        if (port.size() != portLength)
            return;
        for (int i = 0; i < port.size(); ++i)
            port[i] = port.at(i) ^ 0x1E;

        m_FavoriteServers.append(FavoriteServer(QString::fromLatin1(ip), QString::fromLatin1(port)));
    }
}
