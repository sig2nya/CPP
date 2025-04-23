#include <iostream>

using namespace std;

int main() {
	int a, b, d;
	int result = 0;
	cin >> a >> b >> d;

	if (d % a == 0) {
		result += (d / a - 1) * (a + b) + a;
	}
	else {
		result += (d / a) * (a + b) + d % a;
	}

	if (d % b == 0) {
		result += (d / b - 1) * (a + b) + b;
	}
	else {
		result += (d / b) * (a + b) + d % b;
	}

	cout << result << endl;
	return 0;
}
