#include <iostream>

using namespace std;

int main() {
	int n;
	int result_x = 0, result_y = 1001;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int x, y;

		cin >> x >> y;
		if (result_y > y) {
			result_x = x;
			result_y = y;
		}
	}

	cout << result_x << " " << result_y;
	return 0;
}
