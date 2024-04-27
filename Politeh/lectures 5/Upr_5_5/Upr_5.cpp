#include <iostream>
#include <fstream>
#include<windows.h>

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::ifstream file("Upr_5.cpp");
    unsigned char c;
    int count[26] = { 0 };

    if (file.is_open()) {
        while (file >> c) {
            if (c >= 'a' && c <= 'z') {
                count[c - 'a']++;
            }
        }

        file.close();

        std::cout << "Символ\t Количество вхождений\n";
        for (int i = 0; i < 26; i++) {
            std::cout << static_cast<char>(i + 'a') << '\t' << count[i] << '\n';
        }
    }
    else {
        std::cerr << "Не удаётся открыть файл\n";
    }

    return 0;
}