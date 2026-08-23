#include <QDesktopWidget>
#include <QDir>
#include <QFile>
#include <QFileInfo>
#include <QSaveFile>
#include <QSettings>
#include <QXmlStreamReader>

#include <nlohmann/json.hpp>

#include "PCH.h"

CSettings::CSettings() :
    m_Nickname(SettingUnknow::NAME),
    m_Language("en"),
    m_WindowX(-1),
    m_WindowY(-1),
    m_Loaded(false)
{
#ifdef DEBUG_MODE
    SPDLOG_TRACE("{}", __FUNCTION__);
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

bool CSettings::saveLauncherSettings()
{
    m_Nickname = LAUNCHER.getUI()->editNickname->text().isEmpty() ? SettingUnknow::NAME : LAUNCHER.getUI()->editNickname->text();
    m_WindowX = LAUNCHER.x();
    m_WindowY = LAUNCHER.y();
    m_Language = LAUNCHER.getLanguage().getCurrentLang().isEmpty() ? "en" : LAUNCHER.getLanguage().getCurrentLang();
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
        try
        {
            const nlohmann::json config = nlohmann::json::parse(file.readAll().toStdString());
            if (config.is_object())
            {
                loadedUnifiedConfig = true;

                const auto readString = [&config](const char* name, QString& value)
                {
                    const auto field = config.find(name);
                    if (field == config.end() || !field->is_string())
                        return false;
                    value = QString::fromUtf8(field->get_ref<const std::string&>().c_str());
                    return true;
                };
                const auto readInteger = [&config](const char* name, int& value)
                {
                    const auto field = config.find(name);
                    if (field == config.end() || !field->is_number_integer())
                        return false;
                    value = field->get<int>();
                    return true;
                };

                hasNickname = readString("playerName", m_Nickname);
                hasLanguage = readString("lang", m_Language);
                m_Language = m_Language.toLower();
                hasWindowX = readInteger("launcherPosX", m_WindowX);
                hasWindowY = readInteger("launcherPosY", m_WindowY);
                const auto favorites = config.find("favorites");
                if (favorites != config.end() && favorites->is_array())
                {
                    hasFavoritesSection = true;
                    for (const auto& server : *favorites)
                    {
                        if (!server.is_object())
                            continue;
                        const auto ip = server.find("ip");
                        const auto port = server.find("port");
                        if (ip == server.end() || port == server.end() || !ip->is_string() || !port->is_string())
                            continue;
                        const QString ipValue = QString::fromUtf8(ip->get_ref<const std::string&>().c_str());
                        const QString portValue = QString::fromUtf8(port->get_ref<const std::string&>().c_str());
                        if (!ipValue.isEmpty() && !portValue.isEmpty())
                            m_FavoriteServers.append(FavoriteServer(ipValue, portValue));
                    }
                }
            }
        }
        catch (const nlohmann::json::exception& exception)
        {
            SPDLOG_WARN("Could not parse {}: {}", CONFIG_PATH, exception.what());
        }
        file.close();
    }

    bool migratedLegacyXml = false;
    if (!loadedUnifiedConfig)
    {
        QFile legacyFile(LEGACY_CONFIG_PATH);
        if (legacyFile.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QXmlStreamReader xml(&legacyFile);
            QString section;
            bool hasConfigRoot = false;

            while (!xml.atEnd())
            {
                xml.readNext();
                if (xml.isStartElement())
                {
                    const QString name = xml.name().toString();
                    if (name == "GO_Config")
                        hasConfigRoot = true;
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
                }
                else if (xml.isEndElement() && xml.name().toString() == section)
                    section.clear();
            }

            loadedUnifiedConfig = hasConfigRoot && !xml.hasError();
            migratedLegacyXml = loadedUnifiedConfig;
        }
    }

    const bool hasLauncherData = hasNickname && hasLanguage && hasWindowX && hasWindowY;
    if (!loadedUnifiedConfig || !hasLauncherData)
        loadLegacySettings();
    if (!loadedUnifiedConfig || !hasFavoritesSection)
        loadLegacyFavorites();

    if (migratedLegacyXml || !loadedUnifiedConfig || !hasLauncherData || !hasFavoritesSection)
        saveConfig();

    return loadedUnifiedConfig;
}

bool CSettings::saveConfig() const
{
    QDir().mkpath(QFileInfo(CONFIG_PATH).path());

    QSaveFile file(CONFIG_PATH);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
        return false;

    const auto toUtf8 = [](const QString& value)
    {
        const QByteArray bytes = value.toUtf8();
        return std::string(bytes.constData(), static_cast<std::size_t>(bytes.size()));
    };

    nlohmann::ordered_json config;
    config["playerName"] = toUtf8(m_Nickname);
    config["lang"] = toUtf8(m_Language);
    config["launcherPosX"] = m_WindowX;
    config["launcherPosY"] = m_WindowY;
    config["favorites"] = nlohmann::ordered_json::array();
    for (const FavoriteServer &server : m_FavoriteServers)
        config["favorites"].push_back({{"ip", toUtf8(server.first)}, {"port", toUtf8(server.second)}});

    const std::string output = config.dump(2) + '\n';
    if (file.write(output.data(), static_cast<qint64>(output.size())) != static_cast<qint64>(output.size()))
        return false;
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
