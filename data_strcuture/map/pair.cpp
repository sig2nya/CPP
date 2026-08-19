#include <iostream>
#include <utility>

using namespace std;

int main() {
	pair<int, string> p1(1, "Apple");
	auto p2 = make_pair(2, "Banana");

	cout << p1.first << " : " << p1.second << endl;
	cout << p2.first << " : " << p2.second << endl;

	return 0;
}
