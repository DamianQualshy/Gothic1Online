#include "PCH.h"

#include <algorithm>
#include <charconv>
#include <cmath>
#include <cstdint>
#include <limits>
#include <optional>
#include <stdexcept>
#include <string>

#include <nlohmann/json.hpp>

namespace
{
    int ClampToInt(std::int64_t value)
    {
        if (value < std::numeric_limits<int>::min())
            return std::numeric_limits<int>::min();
        if (value > std::numeric_limits<int>::max())
            return std::numeric_limits<int>::max();
        return static_cast<int>(value);
    }

    int ClampToInt(std::uint64_t value)
    {
        if (value > static_cast<std::uint64_t>(std::numeric_limits<int>::max()))
            return std::numeric_limits<int>::max();
        return static_cast<int>(value);
    }

    std::optional<int> TryParseIntegerField(const nlohmann::json& object, const char* key)
    {
        const auto value = object.find(key);
        if (value == object.end() || value->is_null())
            return std::nullopt;

        if (value->is_number_unsigned())
            return ClampToInt(value->get<std::uint64_t>());
        if (value->is_number_integer())
            return ClampToInt(value->get<std::int64_t>());
        if (value->is_number_float())
        {
            const double number = value->get<double>();
            if (!std::isfinite(number))
                return std::nullopt;
            if (number < std::numeric_limits<int>::min())
                return std::numeric_limits<int>::min();
            if (number > std::numeric_limits<int>::max())
                return std::numeric_limits<int>::max();
            return static_cast<int>(number);
        }
        if (value->is_string())
        {
            const std::string& text = value->get_ref<const std::string&>();
            int parsedValue = 0;
            const auto result = std::from_chars(text.data(), text.data() + text.size(), parsedValue);
            if (result.ec == std::errc{} && result.ptr == text.data() + text.size())
                return parsedValue;
        }
        return std::nullopt;
    }

    int ParseIntegerField(const nlohmann::json& object, const char* key, int defaultValue = 0)
    {
        return TryParseIntegerField(object, key).value_or(defaultValue);
    }

    QString ParseStringField(const nlohmann::json& object, const char* key)
    {
        const auto value = object.find(key);
        if (value == object.end() || value->is_null())
            return QString();

        std::string text;
        if (value->is_string())
            text = value->get<std::string>();
        else if (value->is_number_unsigned())
            text = std::to_string(value->get<std::uint64_t>());
        else if (value->is_number_integer())
            text = std::to_string(value->get<std::int64_t>());
        else if (value->is_number_float())
            text = std::to_string(value->get<double>());
        else
            return QString();

        return QString::fromUtf8(text.data(), static_cast<int>(text.size()));
    }

    QString SanitizeDisplayText(QString text)
    {
        for (int i = 0; i < text.size(); ++i)
        {
            if (text.at(i).unicode() < 0x20 && text.at(i).unicode() != 0x07)
                text[i] = QChar(' ');
        }
        return text;
    }
}

CMasterServerList::CMasterServerList(QThread& thread)
    : m_ThreadRunning(true)
{
#ifdef DEBUG_MODE
    SPDLOG_TRACE("{}", __FUNCTION__);
#endif
    initConnections(thread);
    moveToThread(&thread);
}

CMasterServerList::~CMasterServerList()
{
#ifdef DEBUG_MODE
    SPDLOG_TRACE("{}", __FUNCTION__);
#endif
}

void CMasterServerList::setListData(const QString list)
{
    m_List = list;
}

void CMasterServerList::threadStop()
{
    m_ThreadRunning.store(false);
}

void CMasterServerList::threadRenew()
{
    m_ThreadRunning.store(true);
}

void CMasterServerList::initConnections(QThread& thread)
{
    connect(&thread, SIGNAL(started()),
            this, SLOT(onParseServerList()));
}

void CMasterServerList::onParseServerList()
{
    try
    {
        const QByteArray encodedList = m_List.toUtf8();
        const auto response = nlohmann::json::parse(encodedList.constData(), encodedList.constData() + encodedList.size());

        const nlohmann::json* servers = nullptr;
        if (response.is_array())
            servers = &response;
        else if (response.is_object())
        {
            const auto list = response.find("servers");
            if (list != response.end() && list->is_array())
                servers = &(*list);
        }

        if (!servers)
            throw std::runtime_error("master server response does not contain a server list");

        for (const auto& server : *servers)
        {
            if (!m_ThreadRunning.load())
            {
                m_ThreadRunning.store(true);
                return;
            }
            if (!server.is_object())
                continue;

            const QString address = ParseStringField(server, "ip_address");
            const int port = ParseIntegerField(server, "port");
            if (address.isEmpty() || port < 1 || port > 65535)
                continue;

            QString hostName = SanitizeDisplayText(ParseStringField(server, "name"));
            QString description = SanitizeDisplayText(ParseStringField(server, "description")).left(400);
            QString version = SanitizeDisplayText(ParseStringField(server, "version"));
            QString world = SanitizeDisplayText(ParseStringField(server, "map"));
            if (hostName.isEmpty()) hostName = ServerUnknow::HOSTNAME;
            if (!server.contains("description") || server.at("description").is_null()) description = ServerUnknow::DESCRIPTION;
            if (version.isEmpty()) version = ServerUnknow::VERSION;
            if (world.isEmpty()) world = ServerUnknow::WORLD;

            const int players = std::max(0, ParseIntegerField(server, "current_players"));
            const int maxSlots = std::max(0, ParseIntegerField(server, "max_slots"));
            const int ping = std::max(0, ParseIntegerField(server, "ping", ServerUnknow::PING));

            emit signalAddServer(CServerInfo(address, QString::number(port), hostName, description, version, world,
                                             ServerUnknow::SCRIPT, players, maxSlots, ping));
            QThread::msleep(20);
        }
    }
    catch (const std::exception& error)
    {
        SPDLOG_ERROR("Cannot parse master server response: {}", error.what());
        emit signalParseError();
    }
}
