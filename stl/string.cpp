#include <iostream>
#include <string>

int main()
{
	std::string str;

	std::cout << "CIN >> " << std::endl;
	std::cin >> str;
	std::cout << "CIN RESULT(NO MANAGE SPACE) : " << str << std::endl;

	std::cout << "GET LINE >> " << std::endl;
	std::getline(std::cin, str);
	std::cout << "GET LINE RESULT : " << str << '\n';

	std::cout << "GET LINE >> " << std::endl;
	std::getline(std::cin, str, 'i');
	std::cout << "GET LINE RESULT : " << str << std::endl;

	return 0;
}
