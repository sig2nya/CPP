#include <iostream>
#include <string>

using namespace std;

template<class T1, class T2>
void print_all(T1 a, T2 b) {
	cout << "T1 : " << a << endl;
	cout << "T2 : " << b << endl;
};

int main() {
	string s1 = "Dok2";
	string s2 = "On my way.";

	int num1 = 27;
	int num2 = 35;

	double d1 = 3.14;
	double d2 = 36.5;

	cout << "[string, string]" << endl;
	print_all(s1, s2);


	cout << "[string, int]" << endl;
	print_all(s1, num1);

	cout << "[int, int]" << endl;
	print_all(num1, num2);

	cout << "[int, double]" << endl;
	print_all(num1, d1);

	cout << "[double, double]" << endl;
	print_all(d1, d2);

	cout << "[double, string]" << endl;
	print_all(d1, s1);

	return 0;
}
