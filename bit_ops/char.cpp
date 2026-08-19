#include <iostream>
#include <bitset>

using namespace std;

int main() {
	char c = 'A';
	cout << "A binary : " << bitset<8>(c) << endl;
	cout << "A + 1 binary : " << (char) (c + 1) << endl;

	return 0;
}
