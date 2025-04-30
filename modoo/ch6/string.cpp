#include <iostream>
#include <string>

int main() {
	std::string s = "abc";
	std::string t = "def";
	std::string s2 = s;

	std::cout << s << " Length : " << s.length() << std::endl;
	std::cout << s << " Of " << t << " Concate : " << s + t << std::endl;

	if (s == s2) {
		std::cout << s << " and " << s2 << " is equal" << std::endl;
	}

	if (s != t) {
		std::cout << s << " and " << s2 << " is different" << std::endl;
	}
	
	return 0;
}
