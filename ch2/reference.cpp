#include <iostream>

static int change_val(int *p);
static int change_val(int &p);

int main() {
    // Ch2.1)
    int number = 5;

    std::cout << number << std::endl;
    change_val(&number);
    std::cout << number << std::endl;

    // Ch2.2)
    int a = 3;
    int& another_a = a; // reference. an alias for variables
    // 1. references have to be initialized
    // Ex) int& another_a; (x)
    // 2. once, references was designated another variable, It's impossible to be assigned others
    // Ex) int a = 10;
    //     int &another_a = a;
    //     int b = 3;
    //     another_a = b; (x)

    another_a = 5;
    std::cout << "a : " << a << std::endl;
    std::cout << "antoher_a" << another_a << std::endl;
    
    // Ch2.3)
    number = 3;

    std::cout << number << std::endl;
    change_val(number);
    std::cout << number << std::endl;

    // ch2.4)
    int x;
    int& y = x;
    int& z = y;

    x = 1;
    std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;

    y = 2;
    std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;

    z = 3;
    std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;

    return 0;
}

int change_val(int *p) {
    *p = 3;
    return 0;
}

int change_val(int &p) {
    p = 3;
    return 0;
}
