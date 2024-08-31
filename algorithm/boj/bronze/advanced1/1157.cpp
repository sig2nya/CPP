#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <cstring>

using namespace std;

int main() {
	string str;
	int alpahbet[26] = { 0x00, };
	const char *cstr = str.c_str();
	cin >> str;

	transform(str.begin(), str.end(), str.begin(), ::tolower);

	for (int i = 0; i < strlen(cstr); i++) {
		alpahbet[cstr[i] - 97]++;
	}

	auto answer = max_element(begin(alpahbet), end(alpahbet));

	cout << (int) *answer << endl;

	return 0;
}
