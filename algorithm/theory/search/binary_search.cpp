#include <iostream>
#include <vector>
#include <algorithm>

int binary_search(std::vector<int> v, int num) {
    int left = 0, right = v.size();
    int mid;
    int mid_value;
    std::sort(v.begin(), v.end()); // Asc

    while (left <= right) {
        mid = (left + right) / 2;
        mid_value = v[mid];

        if (num == mid_value) {
            return mid;
        }
		else if (mid_value < num) {
            left = mid + 1;
        }
		else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    std::vector<int> numbers = { 4, 2, 7, 1, 9, 5 };

    std::cout << "Sol : " << binary_search(numbers, 5) << std::endl;

    return 0;
}
