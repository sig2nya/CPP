#include <iostream>

int main() {
	int lucky_number = 3;
	int user_input;

	std::cout << "Guess lucky number" << std::endl;

	while(1) {
		std::cout << "Input : ";
		std::cin  >> user_input;

		if (lucky_number == user_input) {
			std::cout << "Answered." << std::endl;
			break;
		}
		else {
			std::cout << "Try Again." << std::endl;
		}
	}

	return 0;
}
