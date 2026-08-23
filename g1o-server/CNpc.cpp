#include "stdafx.h"

CNpc::CNpc()
{
	//SPDLOG_TRACE("CNpc::CNpc()");
	streamedPlayers.Clear();
};

CNpc::~CNpc()
{
	//SPDLOG_TRACE("CNpc::~CNpc()");
	streamedPlayers.Clear();
};