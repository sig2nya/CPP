#include <iostream>

void swap(int &a, int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

int main()
{
	int a = 5;
	int b = 10;

	std::cout << "[Before Swap]" << std::endl;
	std::cout << "A : " << a << " / B : " << b << std::endl;

	swap(a, b);
	std::cout << "[After Swap]" << std::endl;
	std::cout << "A : " << a << " / B : " << b << std::endl;
	return 0;
}
