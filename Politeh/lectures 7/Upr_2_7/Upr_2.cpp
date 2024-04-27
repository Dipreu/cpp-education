#include <iostream>
#include <string>

bool isFirstStringBeforeSecond(const std::string& str1, const std::string& str2) {
    return str1 < str2;
}

int main() {
    std::string str1, str2;
    std::cout << "Enter the first string: ";
    std::cin >> str1;
    std::cout << "Enter the second string: ";
    std::cin >> str2;

    if (isFirstStringBeforeSecond(str1, str2)) {
        std::cout << "true\n";
    }
    else {
        std::cout << "false\n";
    }

    return 0;
}