#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	int time, min;
	cin >> a >> b;
	cin >> c;
	
	time = c / 60;
	min = c % 60;

#if 1
	if ((b + min) >= 60) {
		a++;
		b = (b + min) - 60;
	} else {
		b = b + min;
	}

	if ((a + time) >= 24) {
		a = (a + time) - 24;
	}  else {
		a = a + time;
	}

	cout << a << " " << b << endl;
#endif
}
