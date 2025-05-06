#include <iostream>
#include <string>

class Base {
	std::string s;

	public:
		Base() : s("Based") {
			std::cout << "Based Class" << std::endl;
		}

		void what() {
			std::cout << s << std::endl;
		}
};

class Derived : public Base {
	std::string s;
	
	public:
		Derived() : Base(), s("Derived") {
			std::cout << "Derived Class" << std::endl;
			what();
		}
};

int main() {
	std::cout << " === Based Class === " << std::endl;
	Base p;

	std::cout << " === Derived Class === " << std::endl;
	Derived c;

	return 0;
}
