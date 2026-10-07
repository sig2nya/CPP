#include <iostream>

using namespace std;

struct Node {
	int data;
	Node* left;
	Node* right;

	Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

class Tree {
	private:
		Node* root;

		void preOrderPrivate(Node* node) {
			if (node == nullptr) return;
			cout << node->data << " ";
			preOrderPrivate(node->left);
			preOrderPrivate(node->right);
		}

		void destroyTree(Node* node) {
			if (node == nullptr) return;
			destroyTree(node->left);
			destroyTree(node->right);
			delete node;
		}

	public:
		Tree() : root(nullptr) {}

		~Tree() {
			destroyTree(root);
		}

		void setRoot(Node* node) {
			root = node;
		}

		Node* getRoot() const {
			return root;
		}

		void preOrder() {
			preOrderPrivate(root);
			cout << "\n";
		}
};

int main() {
	Node* root = new Node(10);
	root->left = new Node(5);
	root->right = new Node(20);

	cout << "root : " << root->data		    << '\n';
	cout << "left : " << root->left->data   << '\n';
	cout << "right : " << root->right->data << '\n';

	delete root->left;
	delete root->right;
	delete root;

	return 0;
}
