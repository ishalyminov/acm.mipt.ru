#include <iostream>
#include <stack>

int main() {
    std::string braces;
    std::cin >> braces;
    std::stack<char> brace_stack;
    for (size_t brace_index = 0; brace_index != braces.length(); ++brace_index) {
        char brace = braces[brace_index];
        switch(brace) {
            case '(':
                brace_stack.push(brace);
                break;
            case ')':
                if (!brace_stack.empty() && brace_stack.top() == '(') {
                    brace_stack.pop();
                }
                else {
                    std::cout << "NO";
                    return 0;
                }
                break;
        }
    }
    if (brace_stack.empty()) {
        std::cout << "YES";
    }
    else {
        std::cout << "NO";
    }
    return 0;
}
