#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
	map<int, vector<int>> m;
	string from, to;

	m[0] = { 1, 1, 1, 0, 1, 1, 1 };
	m[1] = { 0, 0, 1, 0, 0, 1, 0 };
	m[2] = { 0, 1, 1, 1, 1, 0, 1 };
	m[3] = { 1, 0, 1, 1, 0, 1, 1 };
	m[4] = { 0, 1, 1, 1, 0, 1, 0 };
	m[5] = { 1, 1, 0, 1, 0, 1, 1 };
	m[6] = { 1, 1, 0, 1, 1, 1, 1 };
	m[7] = { 1, 1, 1, 0, 0, 1, 0 };
	m[8] = { 1, 1, 1, 1, 1, 1, 1 };
	m[9] = { 1, 1, 1, 1, 0, 1, 1 };

	cin >> from >> to;
	
	return 0;
}
