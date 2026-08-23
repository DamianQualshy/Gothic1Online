#pragma once

#include <cstdint>
#include <string>

namespace g1o {

inline constexpr char LaunchSessionEnvironment[] = "G1O_LAUNCH_SESSION";

struct LaunchSession
{
	std::string serverAddress;
	std::uint16_t serverPort = 0;
	std::string startWorld;
};

inline bool ValidateLaunchSession(const LaunchSession& session, std::string* error = nullptr)
{
	const auto fail = [error](const char* message)
	{
		if (error)
			*error = message;
		return false;
	};

	if (session.serverAddress.empty() || session.serverAddress.size() > 255 ||
		session.serverAddress.find('\0') != std::string::npos)
		return fail("serverAddress must contain between 1 and 255 characters");
	if (session.serverPort == 0)
		return fail("serverPort must be between 1 and 65535");
	if (session.startWorld.empty() || session.startWorld.size() > 260 ||
		session.startWorld.find('\0') != std::string::npos)
		return fail("startWorld must contain between 1 and 260 characters");
	return true;
}

} // namespace g1o
