
#include "TcpServer.h"
#include "SampleParser.h"
#include "ClientState.h"
#include <conio.h>

int main(int argc, char * argv[])
{
	TcpServer<SampleParser, ClientState> * server = new TcpServer<SampleParser, ClientState>(12345);

	_getch();
	delete server;
	return 0;
}