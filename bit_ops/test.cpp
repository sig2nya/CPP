#include <iostream>
#include <bitset>

using namespace std;

int main() {
	unsigned char a = 5; // 0000 0101
	unsigned char b = 3; // 0000 0011

	cout << "A		: " << bitset<8>(a) 	 << endl;
	cout << "B		: " << bitset<8>(a) 	 << endl;
	cout << "A & B	: " << bitset<8>(a & b)  << endl;
	cout << "A | B	: " << bitset<8>(a | b)  << endl;
	cout << "A ^ B	: " << bitset<8>(a ^ b)  << endl;
	cout << "~A		: " << bitset<8>(~a) 	 << endl;
	cout << "A << 1 : " << bitset<8>(a << 1) << endl;
	cout << "A >> 1 : " << bitset<8>(a >> 1) << endl;

	int num = 1;
	unsigned char* ptr = reinterpret_cast<unsigned char*> (&num);

	cout << "int num = 1 of memory batch (low addr -> high addr) : \n";
	for (int i = 0; i < sizeof(int); i++) {
		cout << "Byte [" << i << "]: " << bitset<8>(ptr[i]) << "\n";
	}

	return 0;
}
