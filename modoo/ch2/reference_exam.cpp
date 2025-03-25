#include <iostream>
#include <vector>

std::vector<int>& get_vector()
{
	static std::vector<int> vec = { 1, 2, 3 };
	return vec;
}

int main()
{
	std::vector<int> &vec_ref = get_vector();
	vec_ref.push_back(4);

	for (int val : vec_ref) {
		std::cout << val << " ";
	}
	std::cout << std::endl;

	return 0;
}
