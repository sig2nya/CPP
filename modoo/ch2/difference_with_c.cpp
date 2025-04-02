#include <iostream>

int main()
{
	int a = 3;
	int &another_a = a;

	another_a = 5;

	std::cout << "a 	  : " << a << std::endl;
	std::cout << "another_a : " << another_a << std::endl;

	std::cout << "a mem addr 	   : " << &a << std::endl;
	std::cout << "another_a mem addr : " << &another_a << std::endl;

	return 0;
}
