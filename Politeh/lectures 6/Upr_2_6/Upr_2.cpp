#include <iostream>
#include "windows.h"



void string_sort(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    for (int count = 0; count < length - 1; count++) {
        int min_index = count;
        for (int i = count + 1; i < length; i++) {
            if (str[i] < str[min_index]) {
                min_index = i;
            }
        }
        if (count != min_index) {
            char temp = str[count];
            str[count] = str[min_index];
            str[min_index] = temp;
        }
    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char str[100]; // предположим, что максимальная длина вводимой строки - 100 символов
    std::cout << "Введите строку: ";
    std::cin.getline(str, 100); // считываем всю строку, включая пробелы

    string_sort(str);
    std::cout << "Отсортированная строка равна: " << str << std::endl;

    return 0;
}

