#include "stdafx.h"

#include <memory>
#include <string>

#include <httplib.h>
#include <nlohmann/json.hpp>

#ifndef MASTER_SERVER_ENDPOINT
#define MASTER_SERVER_ENDPOINT ""
#endif

namespace
{
	std::unique_ptr<httplib::Client> CreateMasterServerClient(const master_server::EndpointInfo& endpoint)
	{
#ifndef CPPHTTPLIB_OPENSSL_SUPPORT
		if (endpoint.useHttps)
		{
			SPDLOG_ERROR("Master server endpoint requires HTTPS support, but this build lacks OpenSSL support");
			return nullptr;
		}
#endif

		std::string origin = endpoint.useHttps ? "https://" : "http://";
		if (endpoint.host.find(':') != std::string::npos)
		{
			origin.push_back('[');
			origin += endpoint.host;
			origin.push_back(']');
		}
		else
			origin += endpoint.host;
		origin.push_back(':');
		origin += std::to_string(endpoint.port);

		auto client = std::make_unique<httplib::Client>(origin);
#ifdef CPPHTTPLIB_OPENSSL_SUPPORT
		if (endpoint.useHttps)
			client->enable_server_certificate_verification(true);
#endif
		return client;
	}

	std::string SanitizeServerText(std::string text)
	{
		for (std::size_t i = 0; i < text.size(); ++i)
		{
			const unsigned char character = static_cast<unsigned char>(text[i]);
			if (character < 0x20 && character != 0x07)
			{
				text.resize(i);
				break;
			}
		}
		return text;
	}
}

CMaster::CMaster()
	: nextUpdate(std::chrono::steady_clock::time_point::min()),
	  endpointValid(false)
{
	const auto parsedEndpoint = master_server::ParseEndpoint(MASTER_SERVER_ENDPOINT);
	if (!parsedEndpoint)
	{
		SPDLOG_WARN("Server is public, but the master_server_endpoint xmake option is empty or invalid");
		return;
	}

	endpoint = *parsedEndpoint;
	endpointValid = true;
}

CMaster::~CMaster() = default;

void CMaster::Pulse()
{
	using namespace std::chrono_literals;

	if (!endpointValid)
		return;

	const auto now = std::chrono::steady_clock::now();
	if (now < nextUpdate)
		return;
	nextUpdate = now + 15s;

	auto client = CreateMasterServerClient(endpoint);
	if (!client)
		return;

	client->set_connection_timeout(5, 0);
	client->set_read_timeout(5, 0);
	client->set_write_timeout(5, 0);

	CConfig* config = core.GetConfig();
	// The registry derives the public address from the HTTP request source.
	const std::string address;
	const unsigned int port = static_cast<unsigned int>(atoi(config->GetServerPort().c_str()));
	const unsigned int maxSlots = static_cast<unsigned int>(atoi(config->GetMaxSlots().c_str()));

	const nlohmann::json payload = {
		{"server_seed", config->GetServerIdentitySeed().c_str()},
		{"ip_address", address},
		{"port", port},
		{"name", SanitizeServerText(config->GetServerName().c_str())},
		{"current_players", playerManager.GetNumberOfPlayers()},
		{"max_slots", maxSlots},
		{"map", SanitizeServerText(core.GetWorld().c_str())},
		{"description", SanitizeServerText(core.GetDescription().c_str())},
		{"version", versionString}
	};

	const auto response = client->Post(endpoint.path.c_str(), payload.dump(), "application/json");
	if (!response)
	{
		SPDLOG_WARN("Failed to update master server at {}:{}{}: {}", endpoint.host, endpoint.port, endpoint.path,
			httplib::to_string(response.error()));
	}
	else if (response->status >= 400)
	{
		SPDLOG_WARN("Master server responded with status {} when updating {}:{}{}", response->status,
			endpoint.host, endpoint.port, endpoint.path);
	}
	else
	{
		SPDLOG_DEBUG("Master server heartbeat succeeded with status {}", response->status);
	}
}
