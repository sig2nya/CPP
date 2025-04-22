#include <iostream>

using namespace std;

int main() {
	int n, m;
	int l1 = 0, r1 = 0;
	int l2 = 0, r2 = 0;
	int result = 0;
	cin >> n >> m;

	int arr[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}

	cin >> l1 >> r1;
	cin >> l2 >> r2;

	for (int i = l1 - 1; i < r1; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j]) {
				arr[i][j] = 0;
				break;
			}
		}
	}

	for (int i = l2 - 1; i < r2; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j]) {
				arr[i][j] = 0;
				break;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			result += arr[i][j];
		}
	}

	cout << result << endl;
	return 0;
}
