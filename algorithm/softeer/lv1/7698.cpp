#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
	int t, n;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> n;

		if (n % 5 == 0) {
			for (int j = 0; j < n / 5; j++) {
				cout << "++++ ";
			}
		}
		else {
			for (int j = 0; j < n / 5; j++) {
				cout << "++++ ";
			}

			for (int j = 0; j < n % 5; j++) {
				cout << '|';
			}
		}

		cout << endl;
	}
	return 0;
}
