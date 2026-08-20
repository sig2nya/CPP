#include <iostream>

using namespace std;

struct Node {
	Node* next;
	int data;

	Node(int value) : next(nullptr), data(value) {}
};

class Queue {
	private:
		Node* front;
		Node* rear;

	public:
		Queue() : front(nullptr), rear(nullptr) {}

		void push(int value) {
			Node* tmp = new Node(value);

			if (rear == nullptr) {
				front = rear = tmp;
				return;
			}

			rear->next = tmp;
			rear = tmp;
		}

		void pop() {
			if (front == nullptr) return;

			Node* tmp = front;
			front = front->next;
			delete tmp;

			if (front == nullptr) rear = nullptr;
		}
};
