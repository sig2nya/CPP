#include <string.h>
#include <iostream>

static void simple_function();

class Test {
    char c;

    public:
        Test (char _c) {
            c = _c;
            std::cout << "Constructor : " << c << std::endl;
        }

        ~Test() {
            std::cout << "Destructor : " << c << std::endl;
        }
};

int main() {
    Test a('a');
    simple_function();
}

void simple_function() {
    Test b('b');
}
