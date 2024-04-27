#include <iostream>
#include <string>
#include "windows.h"


#include <iostream>
#include <string>
#include <unordered_set>

std::string no_repetitions(std::string str) {
    std::string result = "";
    std::unordered_set<char> seen;

    for (const char& c : str) {
        if (seen.find(c) == seen.end()) {
            result += c;
            seen.insert(c);
        }
    }

    return result;
}

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::string input;
    std::cout << "Введите строку: ";
    std::getline(std::cin, input);

    std::string result = no_repetitions(input);

    std::cout << "Строка без повторяющихся символов равна: " << result << std::endl;

    return 0;
}
