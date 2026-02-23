#include <iostream>
#include <algorithm>

int main() {
	int a[] = { 1, 9, 2, 3, 5, 7, 4, 17 };

	for (int i : a) std::cout << i << ' ';
	std::cout << std::endl;

	std::sort(a, a + 8);

	for (int i : a) std::cout << i << ' ';
	std::cout << std::endl;

	return 0;
}
