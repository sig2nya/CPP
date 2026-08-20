#include <iostream>

using namespace std;

class Stack {
	private:
		vector<int> stack;

	public:
		void push(int value) {
			data.push_back(value);
		}

		void pop() {
			data.pop_back();
		}

		int top() {
			return data.back();
		}

		bool isEmpty() {
			return data.empty();
		}
};
