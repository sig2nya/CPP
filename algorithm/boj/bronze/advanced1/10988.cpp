#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	string str, tmp;
	cin >> str;
	tmp = str;
	reverse(str.begin(), str.end());

	if (tmp == str) cout << 1 << endl;
	else cout << 0 << endl;

	return 0;
}
