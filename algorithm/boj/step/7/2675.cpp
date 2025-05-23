#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	string s;
	int t, r;
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> r;
		cin >> s;

		for (size_t j = 0; j < s.size(); j++) {
			for (int k = 0; k < r; k++) {
				cout << s[j];
			}
		}
		cout << endl;
	}
	return 0;
}
