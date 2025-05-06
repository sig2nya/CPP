#include <string>
#include <iostream>

class Test {
	private:
		char c;

	public:
		Test(char _c) {
			c = _c;
			std::cout << "Constructor " << c << std::endl;
		}

		~Test() {
			std::cout << "Destructor " << c << std::endl;
		}
};

int main() {
	Test a('a');
	Test b('b');
}
