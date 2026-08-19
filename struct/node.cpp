#include <iostream>

struct Node {
	int data;
	int id;
	int value;

	Node(int id, int val) : id(id), value(val) {}

	~Node() {
	}

	void print() {
		std::cout << data << std::endl;
	}
};

struct Point {
	int x, y;
};

struct Parent {
	int parent_val;
};

struct Child : public Parent {
	private:
		int secret_val;

	public:
		int child_val;
};
