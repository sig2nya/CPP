#include <iostream>
#include <queue>

using namespace std;

int main() {
	queue<int> q;

	q.push(10);
	q.push(20);
	q.push(30);
	
	cout << "Front : " << q.front() << endl;
	cout << "Back : " << q.back() << endl;

	cout << " === Before Q Pop === " << endl;
	queue<int> tmp_q = q;
	while (!tmp_q.empty()) {
		cout << tmp_q.front() << " ";
		tmp_q.pop();
	}

	cout << endl;

	q.pop();

	cout << "Q Pop, Front : " << q.front() << endl;

	return 0;
}
