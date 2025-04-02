#include <iostream>

int main()
{
	int *p = new int;
	std::cout << "Not Init p : " << *p << std::endl;
	*p = 10;

	std::cout << *p << std::endl;
	return 0;
}
