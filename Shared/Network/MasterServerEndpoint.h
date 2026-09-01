#pragma once

#include <charconv>
#include <optional>
#include <string>
#include <string_view>
#include <system_error>

namespace master_server
{
struct EndpointInfo
{
	std::string host;
	std::string path{"/"};
	int port{80};
	bool useHttps{false};
};

namespace detail
{
inline bool IsAsciiWhitespace(char character)
{
	return character == ' ' || character == '\t' || character == '\n' || character == '\r' || character == '\f' || character == '\v';
}

inline std::string_view TrimAsciiWhitespace(std::string_view value)
{
	while (!value.empty() && IsAsciiWhitespace(value.front()))
		value.remove_prefix(1);
	while (!value.empty() && IsAsciiWhitespace(value.back()))
		value.remove_suffix(1);
	return value;
}

inline bool ParsePort(std::string_view portText, int& port)
{
	if (portText.empty())
		return false;

	int parsedPort = 0;
	const char* first = portText.data();
	const char* last = first + portText.size();
	const auto result = std::from_chars(first, last, parsedPort);
	if (result.ec != std::errc{} || result.ptr != last || parsedPort <= 0 || parsedPort > 65535)
		return false;

	port = parsedPort;
	return true;
}

inline void AssignPath(EndpointInfo& endpoint, std::string_view path)
{
	endpoint.path.clear();
	if (path.empty())
	{
		endpoint.path = "/";
		return;
	}

	if (path.front() == '?')
		endpoint.path = "/";
	endpoint.path.append(path.begin(), path.end());
}
}

inline std::optional<EndpointInfo> ParseEndpoint(std::string_view endpointText)
{
	endpointText = detail::TrimAsciiWhitespace(endpointText);
	if (endpointText.empty())
		return std::nullopt;

	EndpointInfo endpoint;
	std::string_view remainder = endpointText;
	const auto schemePosition = remainder.find("://");
	if (schemePosition != std::string_view::npos)
	{
		const auto scheme = remainder.substr(0, schemePosition);
		if (scheme == "http")
		{
			endpoint.useHttps = false;
			endpoint.port = 80;
		}
		else if (scheme == "https")
		{
			endpoint.useHttps = true;
			endpoint.port = 443;
		}
		else
			return std::nullopt;
		remainder.remove_prefix(schemePosition + 3);
	}

	if (remainder.empty())
		return std::nullopt;

	const auto pathPosition = remainder.find_first_of("/?");
	std::string_view hostAndPort = remainder;
	if (pathPosition != std::string_view::npos)
	{
		hostAndPort = remainder.substr(0, pathPosition);
		detail::AssignPath(endpoint, remainder.substr(pathPosition));
	}
	if (hostAndPort.empty())
		return std::nullopt;

	std::string_view host = hostAndPort;
	if (hostAndPort.front() == '[')
	{
		const auto closeBracketPosition = hostAndPort.find(']');
		if (closeBracketPosition == std::string_view::npos)
			return std::nullopt;

		host = hostAndPort.substr(1, closeBracketPosition - 1);
		const auto portSuffix = hostAndPort.substr(closeBracketPosition + 1);
		if (!portSuffix.empty())
		{
			if (portSuffix.front() != ':' || !detail::ParsePort(portSuffix.substr(1), endpoint.port))
				return std::nullopt;
		}
	}
	else
	{
		const auto portPosition = hostAndPort.rfind(':');
		if (portPosition != std::string_view::npos)
		{
			if (!detail::ParsePort(hostAndPort.substr(portPosition + 1), endpoint.port))
				return std::nullopt;
			host = hostAndPort.substr(0, portPosition);
		}
		if (host.find(':') != std::string_view::npos)
			return std::nullopt;
	}

	host = detail::TrimAsciiWhitespace(host);
	if (host.empty())
		return std::nullopt;

	endpoint.host.assign(host.begin(), host.end());
	return endpoint;
}
}
