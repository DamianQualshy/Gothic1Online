#pragma once

#include "LaunchSession.h"

#include <optional>
#include <stdexcept>
#include <string_view>

#include <nlohmann/json.hpp>

namespace g1o {

inline std::string SerializeLaunchSession(const LaunchSession& session)
{
	std::string error;
	if (!ValidateLaunchSession(session, &error))
		throw std::invalid_argument(error);

	const nlohmann::json payload = {
		{"serverAddress", session.serverAddress},
		{"serverPort", session.serverPort},
		{"startWorld", session.startWorld}
	};
	return payload.dump(-1, ' ', true);
}

inline std::optional<LaunchSession> ParseLaunchSession(std::string_view payload, std::string* error = nullptr)
{
	try
	{
		const nlohmann::json json = nlohmann::json::parse(payload);
		if (!json.is_object())
		{
			if (error)
				*error = "launch session must be a JSON object";
			return std::nullopt;
		}

		const auto address = json.find("serverAddress");
		const auto port = json.find("serverPort");
		const auto world = json.find("startWorld");
		if (address == json.end() || !address->is_string() ||
			port == json.end() || !(port->is_number_integer() || port->is_number_unsigned()) ||
			world == json.end() || !world->is_string())
		{
			if (error)
				*error = "launch session has missing or invalid fields";
			return std::nullopt;
		}

		const std::int64_t numericPort = port->get<std::int64_t>();
		if (numericPort < 1 || numericPort > 65535)
		{
			if (error)
				*error = "serverPort must be between 1 and 65535";
			return std::nullopt;
		}

		LaunchSession session{
			address->get<std::string>(),
			static_cast<std::uint16_t>(numericPort),
			world->get<std::string>()
		};
		if (!ValidateLaunchSession(session, error))
			return std::nullopt;
		return session;
	}
	catch (const nlohmann::json::exception& exception)
	{
		if (error)
			*error = exception.what();
		return std::nullopt;
	}
}

} // namespace g1o
