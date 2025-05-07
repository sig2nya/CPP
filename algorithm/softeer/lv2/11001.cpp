#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool gpt_compare(const string& a, const string& b) {
	size_t pos_a = a.find('.');
	string x1 = (pos_a != string::npos) ? a.substr(0, pos_a) : a;
	string y1 = (pos_a != string::npos) ? a.substr(pos_a + 1) : "";

	size_t pos_b = b.find('.');
	string x2 = (pos_b != string::npos) ? b.substr(0, pos_b) : b;
	string y2 = (pos_b != string::npos) ? b.substr(pos_b + 1) : "";

	if (x1 != x2) {
		return stoi(x1) < stoi(x2);
	}

	if (y1.empty() && !y2.empty()) return true;
	if (!y1.empty() && y2.empty()) return false;

	return stoi(y1) < stoi(y2);
}

int main() {
	int n;
	cin >> n;
	vector<string> numbers(n);

	for (int i = 0; i < n; i++) {
		cin >> numbers[i];
	}

	sort(numbers.begin(), numbers.end(), gpt_compare);

	for (const auto& num : numbers) {
		cout << num << "\n";
	}

	return 0;
}
