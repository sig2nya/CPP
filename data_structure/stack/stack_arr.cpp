#include <iostream>

using namespace std;

class ArrayStack {
	private:
		static const int MAX_SIZE = 100;
		int arr[MAX_SIZE];
		int top_idx;

	public:
		ArrayStack() {
			top_idx = -1;
		}

		void push(int value) {
			if (isFull()) {
				cout << "Stack Overflow" << endl;
				return;
			}

			arr[++top_idx] = value;
		}

		void pop() {
			if (isEmpty()) {
				cout << "Stack Empty" << endl;
				return;
			}

			top_idx--;
		}

		int top() {
			if (isEmpty()) {
				throw out_of_range("Stack Empty");
			}
			return arr[top_idx];
		}

		bool isFull() {
			return top_idx == MAX_SIZE - 1;
		}

		bool isEmpty() {
			return top_idx == -1;
		}
};
