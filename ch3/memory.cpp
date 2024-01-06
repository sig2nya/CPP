#include <iostream>

int main() {
    // 3.1)
    int *p = new int; // same as malloc
    *p = 10;

    std::cout << *p << std::endl;

    delete p; // same as free

    // 3.2)
    int arr_size;
    std::cout << "Input array size : ";
    std::cin >> arr_size;

    int *list = new int[arr_size]; // same with JAVA
    for (int i = 0; i < arr_size; i++) {
    std::cin >> list[i];
    }

    for (int i = 0; i < arr_size; i++) {
        std::cout << i << "th elements of list : " << list[i] << std::endl;
    }


    delete[] list;


    return 0;
}
