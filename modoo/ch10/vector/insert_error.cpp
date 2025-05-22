#include <iostream>
#include <vector>

template <typename T>
void print_vector(std::vector<T>& vec) {
	std::cout << "[ ";
	for (typename std::vector<T>::iterator iter = vec.begin(); iter != vec.end(); iter++) {
		std::cout << *iter << " ";
	}
	std::cout << " ]";
	std::cout << std::endl;
}

int main() {
	std::vector<int> vec;
	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(40);
	vec.push_back(20);

	std::cout << "Vec's Init status " << std::endl;
	print_vector(vec);

	std::vector<int>::iterator iter = vec.begin();
	std::vector<int>::iterator end_iter = vec.end();

	for (; iter != end_iter; iter++) {
		if (*iter == 20) {
			vec.erase(iter); // seg fault
		}
	}

	std::cout << "Value 20 erased" << std::endl;
	print_vector(vec);
	return 0;
}
