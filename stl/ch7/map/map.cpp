#include <iostream>
#include <map>
#include <string>

int main() {
	std::map<std::string, int> ageMap;

	ageMap["Alice"] = 25;
	ageMap.insert({"Bob", 30});

	std::cout << "Alice' ages : " << ageMap["Alice"] << std::endl;

	auto it = ageMap.find("Bob");
	if (it != ageMap.end()) {
		std::cout << "Bob' age : " << it->second << std::endl;
	}

	for (const auto& pair : ageMap) {
		std::cout << pair.first << " : " << pair.second << std::endl;
	}

	return 0;
}
