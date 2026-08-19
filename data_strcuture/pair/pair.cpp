#include <iostream>
#include <utility>

int main() {
	std::pair<int, std::string> p1(1, "Apple");
	auto p2 = std::make_pair(2, "Banana");

	std::cout << p1.first << " : " << p1.second << std::endl;
	std::cout << p2.first << " : " << p2.second << std::endl;

	return 0;
}
