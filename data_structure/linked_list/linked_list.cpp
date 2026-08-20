#include <iostream>

using namespace std;

struct Node {
	int data;
	Node* next;
};

class LinkedList {
	private:
		Node* head;
		int count;

	public:
		LinkedList() {
			head = nullptr;
			count = 0;
		}

		~LinkedList() {
			Node* current = head;
			while (current != nullptr) {
				Node* nextNode = current->next;
				delete current;
				current = nextNode;
			}
		}

		void push_front(int value) {
			Node* newNode = new Node();

			newNode->data = value;
			newNode->next = this->head;

			this->head = newNode;
			count++;
		}

		void push_back(int value) {
			Node* newNode = new Node();

			newNode->data = value;
			newNode->next = nullptr;

			if (head == nullptr) {
				head = newNode;
				count++;
				return;
			}

			Node* curr = head;

			while (curr->next != nullptr) {
				curr = curr->next;
			}

			curr->next = newNode;
			count++;
		}

		bool contains(int value) {
			Node* curr = this->head;
			while (curr != nullptr) {
				if (curr->data == value) {
					return true;
				}
				curr = curr->next;
			}
			return false;
		}

		void remove(int value) {
			Node* prev = nullptr;
			Node* curr = head;

			while (curr != nullptr) {
				if (curr->data == value) {
					prev->next = curr->next;
					delete curr;
					count--;
					return;
				}

				prev = curr;
				curr = curr->next;
			}
		}

		void print() {
			Node* curr = this->head;
			while (curr != nullptr) {
				cout << curr->data << endl;
				curr = curr->next;
			}
		}
};
