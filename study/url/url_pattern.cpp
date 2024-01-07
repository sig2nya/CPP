#include <iostream>
#include <regex>

int main() {
    std::regex pattern("z(\\d+)\\.b2te\\.bid");
    std::string test_str;

    std::cout << "Input Test URL : ";
    std::cin >> test_str;

    if (std::regex_match(test_str, pattern)) {
        std::cout << "Match" << std::endl;
    } else {
        std::cout << "No Match" << std::endl;
    }

    return 0;
}
