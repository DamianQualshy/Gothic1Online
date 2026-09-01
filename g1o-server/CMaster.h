#ifndef CMASTER_H
#define CMASTER_H

#include <chrono>

#include "../Shared/Network/MasterServerEndpoint.h"

#define master CMaster::GetInstance()

class CMaster
{
private:
	master_server::EndpointInfo endpoint;
	std::chrono::steady_clock::time_point nextUpdate;
	bool endpointValid;

	CMaster();
	CMaster(const CMaster&) = delete;
	CMaster& operator=(const CMaster&) = delete;
	~CMaster();

public:
	static CMaster& GetInstance()
	{
		static CMaster instance;
		return instance;
	}

	void Pulse();
};

#endif // CMASTER_H
