#include <iostream>

using namespace std;

void Print(int a, int b) {
	cout << a << ", " << b << endl;
	return;
}

void Print(double a, double b) {
	cout << a << ", " << b << endl;
	return;
}

void Print(const char *a, const char *b) {
	cout << a << ", " << b << endl;
	return;
}

int main() {
	Print(10, 20);
	Print(0.123, 1.123);
	Print("ABC", "abcde");

	return 0;
}
