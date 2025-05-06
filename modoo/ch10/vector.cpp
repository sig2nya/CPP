#include <iostream>
#include <vector>

int main()
{
	std::vector<int> vec;

	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(40);

	for (std::vector<int>::size_type i = 0; i < vec.size(); i++) {
		std::cout << "Vector " << i + 1 << "'s element : " << vec[i] << std::endl;
	}

	return 0;
}
