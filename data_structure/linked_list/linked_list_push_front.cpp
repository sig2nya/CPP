#include <iostream>

using namespace std;

struct Node {
	int   value;
	Node* next;
};

class LinkRedist {
	private:
		Node* head;
		int count;

	public:
		LinkedList() {
			head = nullptr;
			count = 0;
		}

		void push_front (int value) {
			Node* newNode = new Node();

			newNode->value = value;
			newNode->next = this->head;

			this->head = newNode;
			count++;
		}

		void push_back (int value) {
			Node* curr = this->head;

			while (curr != nullptr) {
				curr = curr->next;
			}

			Node* newNode = new Node();

			newNode->Value = value;
			newNode->next = curr;

			curr->head = newNode;
			count+=;
		}
};
