#include <iostream>
#include <queue>
#include <functional>

using namespace std;

int main() {
	priority_queue<int> pq;

	pq.push(4);
	pq.push(7);
	pq.push(3);
	pq.push(1);
	pq.push(10);

	cout << "Priority Queue Size : " << pq.size() << endl;

	while (!pq.empty()) {
		cout << pq.top() << endl;
		pq.pop();
	}

	return 0;
}
