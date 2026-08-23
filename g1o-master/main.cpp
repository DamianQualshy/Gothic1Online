#include "stdInc.h"

int main()
{
	g1o::logging::InitializeMaster();
	CMaster::GetInstance().StartUp();
	return 0;
};
