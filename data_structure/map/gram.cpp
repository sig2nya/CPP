#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
	map<std::string, int> userMap;

	userMap["Alice"] = 25;
	userMap.insert({"Bob", 38});

	auto it = userMap.find("Alice");
	if (it != userMap.end()) {
		cout << "Found : " << it->second << endl;
	}

	for (const auto&  pair : userMap) {
		cout << pair.first << " : " << pair.second << endl;
	}

	return 0;
}
