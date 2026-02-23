#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
	string str;
	cin >> str;

	for (char &c : str) {
		if (c >= 'A' && c <= 'Z') {
			c = c + ('a' - 'A');
		}
		else if (c >= 'a' && c <= 'z') {
			c = c - ('a' - 'A');
		}
	}

	cout << str << endl;
	return 0;
}
