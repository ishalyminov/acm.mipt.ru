#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <iomanip>

double get_partial_result(int in_accumulator, int in_sign, int in_tree_level) {
    std::cerr << "getting partial result with accumulator=" << in_accumulator << ", sign=" << in_sign << ", tree_level=" << in_tree_level << std::endl;
    const double turn_probability(0.5);
    return (in_accumulator * std::pow(turn_probability, in_tree_level) * in_sign);
}

int main() {
    double result(0.0);
    int current_tree_level(0);
    int sign(1);
    int accumulator(0);
    std::string tree;
    std::getline(std::cin, tree);
    for (size_t index = 0; index != tree.length(); ++index) {
        char current_char = tree[index];
        switch (current_char) {
            case ' ':
                result += get_partial_result(accumulator, sign, current_tree_level);
                sign = 1;
                accumulator = 0;
                break;
            case '(':
                ++current_tree_level;
                sign = 1;
                break;
            case ')':
                result += get_partial_result(accumulator, sign, current_tree_level);
                --current_tree_level;
                accumulator = 0;
                sign = 1;
                break;
            case '-':
                sign = -1;
            default:
                int number = atoi(&current_char);
                accumulator *= 10;
                accumulator += number;
        }
    }
    std::cout << std::setprecision(2) << std::fixed << result;
    return 0;
}
