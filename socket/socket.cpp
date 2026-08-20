#include <iostream>
#include <vector>
#include <cstring>

void OnReceive(const char* data, size_t size);
void ProcessPacket(const std::vector<char>& body);

std::vector<char> g_streamBuffer;
bool g_readingHeader = true;
int g_targetBodyLength = 0;

const size_t HEADER_SIZE = 4;

void OnReceive(const char& incomingData, size_t incomingSize)
{

}
