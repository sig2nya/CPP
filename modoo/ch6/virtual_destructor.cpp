#include <iostream>

class Parent {
	public:
		Parent() { std::cout << "Parent Constructor Called" << std::endl; }
		~Parent() { std::cout << "Parent Destructor Called" << std::endl; }
};

class Child : public Parent {
	public:
		Child() { std::cout << "Child Constructor Called" << std::endl; }
		~Child() { std::cout << "Child Destructor Called" << std::endl; }
};

int main() {
	std::cout << "--- Normal Child ---" << std::endl;
	Child c;

	std::cout << "--- Parent Pointers' pointing Child ---" << std::endl;
	{
		Parent *p = new Child();
		delete p;
	}
}
