#include <iostream>
#include <algorithm>
#include <limits>

int main() {
    long max_element = std::numeric_limits<long>::min();
    while (!std::cin.eof()) {
        long element;
        std::cin >> element;
        max_element = std::max(element, max_element);
    }
    std::cout << max_element;
    return 0;
}
