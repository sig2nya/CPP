#include <iostream>

using namespace std;

class Stack {
	private:
		int* arr;
		int capacity;
		int count;

	public:
		Stack(int capacity) {
			this->capacity = capacity;
			this->count = 0;
			this->arr = new int[capacity];
		}

		~Stack() {
			delete[] arr;
		}

		bool push_back(int value) {

		}
};
