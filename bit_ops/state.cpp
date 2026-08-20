#include <iostream>

using namespace std;

int main() {
	const int POISON = 1 << 0; // 0001
	const int STUN	 = 1 << 1; // 0010
	const int BLEED  = 1 << 2; // 0100

	int state = 0;

	state = state | POISON;
	state = state | BLEED;

	cout << state << endl;

	if (state & (1 << 0)) {
		cout << "POISON State" << endl;
	}
	
	if (state & (1 << 1)) {
		cout << "STUN   State" << endl;
	}

	if (state & (1 << 2)) {
		cout << "BLEED  State" << endl;
	}

	return 0;
}
