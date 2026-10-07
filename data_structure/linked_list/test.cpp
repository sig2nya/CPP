#include <iostream>

using namespace std;

struct Node {
	int   data;
	Node* next;
};

class LinkedList {
	private:
		Node* head;
		int   count;

	public:
		LinkedList() {
			head  = nullptr;
			count = 0;
		}

		void push_front(int value) {
			Node* newNode = new Node();

			newNode->data = value;
			newNode->next = this->head;

			this->head = newNode;
			count++;
		}
};
