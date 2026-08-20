#include <iostream>
#include <queue>

using namespace std;

int main() {
	queue<int> q;

	q.push(10);
	q.push(20);
	q.push(30);

	cout << "front : " << q.front() << endl;
	cout << "back  : " << q.back()  << endl;
	cout << "FIFO" << endl;

	while (!q.empty()) {
		cout << "data : " << q.front() << endl;
		q.pop();
	}

	return 0;
}
