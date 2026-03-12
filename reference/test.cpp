#include <iostream>

void modifyWithPoinder(int *p) {
	if (p != NULL) {
		*p += 10;
	}
}

void modifyWithReference(int& ref) {
	ref += 10;
}

int main() {
	int num = 100;

	modifyWithPointer(&num);
	modifyWithReference(num);

	std::cout << num << std::endl;

	return 0;
}
