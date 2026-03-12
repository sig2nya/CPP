#include <iostream>
#include <map>
#include <string>

int main() {
	std::map<std::string, int> userMap;

	userMap["Alice"] = 25;
	userMap.insert({"Bob", 38});

	auto it = userMap.find("Alice");
	if (it != userMap.end()) {
		std::cout << "Found : " << it->second << std::endl;
	}

	for (const auto&  pair : userMap) {
		std::cout << pair.first << " : " << pair.second << std::endl;
	}

	return 0;
}
