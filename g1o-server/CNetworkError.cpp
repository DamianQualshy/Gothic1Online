#include "stdafx.h"

void CNetworkError::DisplayDetails(StartupResult result)
{
	switch(result)
	{
		case RAKNET_ALREADY_STARTED:          SPDLOG_ERROR("Raknet already started."); break;
		case INVALID_SOCKET_DESCRIPTORS:      SPDLOG_ERROR("Invalid socket descriptors."); break;
		case INVALID_MAX_CONNECTIONS:         SPDLOG_ERROR("Invalid max connections."); break;
		case SOCKET_FAMILY_NOT_SUPPORTED:     SPDLOG_ERROR("Invalid socket family."); break;
		case SOCKET_PORT_ALREADY_IN_USE:      SPDLOG_ERROR("Port already in use."); break;
		case SOCKET_FAILED_TO_BIND:           SPDLOG_ERROR("Can not socket to bind."); break;
		case PORT_CANNOT_BE_ZERO:             SPDLOG_ERROR("Port can not be zero."); break;
		case FAILED_TO_CREATE_NETWORK_THREAD: SPDLOG_ERROR("Can not create network thread."); break;
		case STARTUP_OTHER_FAILURE:           SPDLOG_ERROR("Unknown failure."); break;
	}
};