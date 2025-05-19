#include <iostream>

using namespace std;

class Point
{
	int x, y;
	public:
		Point(int _x = 0, int _y = 0) : x(_x), y(_y) { }
		void Print() const { cout << x << ", " << y << endl;
};

int main()
{
	Point p1(2, 3), p2(5, 5);

	p1 + p2;
	p1 * p2;
	p1 = p2;
	p1 == p2;
	p1 += p2;

	return 0;
}
