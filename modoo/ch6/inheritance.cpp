#include <iostream>
#include <string>

class Base {
	private:
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
	private:
		std::string s;
	
	public:
		Derived() : Base(), s("Derived") {
			std::cout << "Derived Class" << std::endl;
		}

		void what() {
			std::cout << s << std::endl;
		}
};

int main() {
	Base p;
	Derived c;

	std::cout << " === Pointer Version === " << std::endl;
	Base* p_c = &c;
	p_c->what();

	return 0;
}
