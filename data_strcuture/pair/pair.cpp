#include <iostream>
#include <utility>
#include <string>

int main() {
	std::pair<int, std::string> p1 = std::make_pair(1, "Success");
	std::pair<int, std::string> p2 = { 2, "Pending" };

	std::cout << p1.first << ": " << p1.second << std::endl;

	if (p1 < p2) {
		std::cout << "p1 is more smaller than p2" << std::endl;
	}

	return 0;
}
