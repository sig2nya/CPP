#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Stack {
	private:
		std::vector<int> stack;

	public:
		int push(int x) {
			stack.push_back(x);
			return x;
		}

		int pop() {
			if (stack.empty()) return -1;

			int result = stack.back();
			stack.pop_back();
			return result;
		}

		int size() {
			return stack.size();
		}

		int empty() {
			return stack.empty() ? 1 : 0;
		}

		int top() {
			if (stack.empty()) return -1;
			return stack.back();
		}
};

int main() {
	int n;
	Stack stack;

	cin >> n;

	for (int i = 0; i < n; i++) {
		string ops;
		cin >> ops;

		if (ops == "push") {
			int x;
			cin >> x;
			stack.push(x);
		}
		else if (ops == "pop") {
			cout << stack.pop() << endl;
		}
		else if (ops == "size") {
			cout << stack.size() << endl;
		}
		else if (ops == "empty") {
			cout << stack.empty() << endl;
		}
		else if (ops == "top") {
			cout << stack.top() << endl;
		}
	}

	return 0;
}
