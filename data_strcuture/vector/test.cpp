#include <iostream>
#include <vector>
#include <list>

int main() {
	std::vector<int> v = { 1, 2, 3 };
	v.push_back(4);
	std::cout << "Vector Access : " << v[2] << std::endl;

	std::list<int> l = { 1, 2, 3 };
	auto it = l.begin();
	std::advance(it, 2);
	l.insert(it, 99);

	std::vector<std::vector<int>> arr_vec(10, vector<int>(10, 0));

	return 0;
}
