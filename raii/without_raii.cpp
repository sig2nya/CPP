#include <iostream>

bool error() {
	return true;
}

void fnc() {
	int* c = new int[100];
	if (error()) return;
	delete[] c;
}

int main() {
	fnc();
	printf("hi");
	return 0;
}
