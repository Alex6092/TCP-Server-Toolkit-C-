#pragma once

#include "Parser.h"
#include "ThreadSafeQueue.h"

class ModbusOperation;

class SampleParser : public Parser<ClientState>
{
public:
	SampleParser();
	~SampleParser();

	void parse(ClientState * client, std::vector<unsigned char> & receivedPacket);
	void parse(SOCKET sock, unsigned char * buf, int length);
};

