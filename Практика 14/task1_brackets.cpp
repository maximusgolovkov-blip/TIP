#include <iostream>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string line;
    if (!std::getline(std::cin, line)) {
        return 0;
    }

    int roundOpen = 0, roundClose = 0;   // ( )
    int squareOpen = 0, squareClose = 0; // [ ]
    int curlyOpen = 0, curlyClose = 0;   // { }

    for (char c : line) {
        if (c == '(') {
            ++roundOpen;
        } else if (c == ')') {
            ++roundClose;
        } else if (c == '[') {
            ++squareOpen;
        } else if (c == ']') {
            ++squareClose;
        } else if (c == '{') {
            ++curlyOpen;
        } else if (c == '}') {
            ++curlyClose;
        }
    }

    if (roundOpen == roundClose &&
        squareOpen == squareClose &&
        curlyOpen == curlyClose) {
        std::cout << "yes\n";
    } else {
        std::cout << "no\n";
    }

    return 0;
}
