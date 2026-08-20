#ifndef CRECEIVER_H
#define CRECEIVER_H

class CNetwork; //Bo tutaj oczywiście nie ma dostępu do tej klasy

class CReceiver
{
public:
	CReceiver();
	~CReceiver();

	void ReceivePackets(CNetwork* network);
};

#endif //CRECIEVER_H