#include <iostream>

namespace {
	int OnlyInThisFile() { return 0; }

	int only_in_this_file = 0;
}

int main() {
	OnlyInThisFile();
	only_in_this_file = 3;

	std::cout << only_in_this_file << std::endl;
	return 0;
}
