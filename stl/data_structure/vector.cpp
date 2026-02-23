#include <vector>
#include <iostream>

int main() {
	std::vector<int> numbers;
	int input, sum = 0;

	std::cout << "input 5 nums : " << std::endl;

	for (int i = 0; i < 5; i++) {
		std::cin >> input;
		numbers.push_back(input);
	}

	std::cout << "inputs nums : " << numbers.size() << std::endl;

	for (int i : numbers) {
		sum += i;
	}

	std::cout << "every nums sum : " << sum << std::endl;

	if (!numbers.empty()) {
		std::cout << "first num : " << numbers[0] << std::endl;
		std::cout << "last num : " << numbers.back << std::endl;
	}

	return 0;
}
