#include <iostream>

using namespace std;

struct Node {
	int value;
	Node *next;
};

int sumList(Node* head) {
	int sum = 0;

	while (head != nullptr) {
		sum += head->value;
		head = head->next;
	}

	return sum;
}
