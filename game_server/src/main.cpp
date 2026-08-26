#include "net/socket.h"

#include <iostream>

void testSocket() {
	std::cout << "testSocket Started\n";

	Socket socket;

	std::cout << "Present fd : "
			  << socket.fd()
			  << '\n';

	std::cout << "testSocket Ended\n";
}

int main() {
	std::cout << "main started\n";

	testSocket();

	std::cout << "main ended\n";

	return 0;
}
