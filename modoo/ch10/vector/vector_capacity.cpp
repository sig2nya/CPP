#include <iostream>
#include <vector>

int main() {
	std::vector<int> v;

	std::cout << "Size : " << v.size() << std::endl;
	std::cout << "Capacity : " << v.capacity() << std::endl;

	v.push_back(1);
	std::cout << "After 1 push_back - Size : " << v.size() << ", Capacity : " << v.capacity() << std::endl;

	v.push_back(2);
	v.push_back(3);
	std::cout << "After 3 push_backs - Size : " << v.size() << ", Capacity : " << v.capacity() << std::endl;

	return 0;
}
