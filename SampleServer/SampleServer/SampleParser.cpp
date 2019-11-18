#include "SampleParser.h"
#include <iostream>

#include "TcpServer.h"

SampleParser::SampleParser()
{
}


SampleParser::~SampleParser()
{
}

void SampleParser::parse(ClientState * client, std::vector<unsigned char> & receivedPacket)
{
	std::vector<unsigned char> & buffer = client->getBuffer();

	for (int i = 0; i < receivedPacket.size(); i++)
	{
		unsigned char c = receivedPacket[i];
		buffer.push_back(c);
	}

	// Impl�mentation de votre protocole ici :
	// (Ici c'est l'exemple d'un echo server : le serveur r�pond ce qu'on lui a envoy�)
	long sentenceLength = buffer.size();
	unsigned char * sentence = new unsigned char[sentenceLength];

	for (int i = 0; i < sentenceLength; i++)
	{
		sentence[i] = buffer[i];
	}

	TcpServer<SampleParser, ClientState>::Send(client, (char*)sentence, sentenceLength);
}

void SampleParser::parse(SOCKET sock, unsigned char * buf, int length)
{
	Parser<ClientState>::parse(sock, buf, length);
}
