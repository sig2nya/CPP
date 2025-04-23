#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> numbers(n);

	for (int i = 0; i < n; i++) {
		cin >> numbers[i];
	}

	sort(numbers.begin(), numbers.end());

	int max_product = max(numbers[0] * numbers[1], numbers[n -1] * numbers[n - 2]);

	cout << max_product << endl;
	return 0;
}
