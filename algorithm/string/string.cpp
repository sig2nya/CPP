#include <iostream>
#include <string>

int main() {
	string str1 = "Hello";
	string str2("World!");
	string str3(5, "*");

	// ch1
	std::cout << str1 << " " << str2 << " " << str3 << std::endl;

	// ch2
	std::cout << str1 + ", " + str2 + "!" << std::endl;
	string test = str1.append(", ").appen(str2).append("!");

	// ch3
	string sub = test.substr(7, 5);
	std::cout << sub << std::endl;


	return 0;
}
