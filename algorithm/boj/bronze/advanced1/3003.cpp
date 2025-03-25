#include <iostream>

using namespace std;

int main()
{
	int chess[6] = { 0x00, };
	int origin[6] = { 1, 1, 2, 2, 2, 8 };
	int answer[6] = { 0x00, };

	for (int i = 0; i < 6; i++) {
		cin >> chess[i];
		answer[i] = origin[i] - chess[i];
	}

	for (int i = 0; i < 6; i++) {
		cout << answer[i] << " ";
	}
}
