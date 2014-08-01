#include <iostream>
#include <vector>
#include <bitset>

const int MAX_ELEMENT_VALUE = 1000000;

template<int size>
std::bitset<size> read_set() {
    bool end_of_set = false;
    std::bitset<size> result;
    while (!end_of_set) {
        int element;
        std::cin >> element;
        if (element == -1) {
            end_of_set = true;
            continue;
        }
        result.set(element);
    }
    return result;
}

int main() {

    std::vector<int> numbers(MAX_ELEMENT_VALUE, 0);

    std::bitset<MAX_ELEMENT_VALUE>
        set_a(read_set<MAX_ELEMENT_VALUE>()),
        set_b(read_set<MAX_ELEMENT_VALUE>());

    for (int index = 0; index != set_a.size(); ++index) {
        numbers[index] += int(set_a.test(index));
    }
    for (int index = 0; index != set_b.size(); ++index) {
        numbers[index] += int(set_b.test(index));
    }

    bool intersection_empty(true);
    for (int index = 0; index != MAX_ELEMENT_VALUE; ++index) {
        if (1 < numbers[index]) {
            std::cout << index << ' ';
            intersection_empty = false;
        }
    }
    if (intersection_empty) {
        std::cout << "empty";
    }

}
