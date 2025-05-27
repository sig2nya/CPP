#include <iostream>
#include <vector>

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
	return 0;
}
