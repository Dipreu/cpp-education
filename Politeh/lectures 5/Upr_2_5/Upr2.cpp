#include <iostream>
#include<windows.h>


void print_pyramid(int height);

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int inputHeight;
    std::cout << "Эта программа печатает на экране 'пирамиду' заданной высоты.\n";
    do {
        std::cout << "Введите высоту пирамиды: ";
        std::cin >> inputHeight;
    } while (inputHeight < 1 || inputHeight > 30); // Запрос ввода, пока значение не будет валидным
    print_pyramid(inputHeight);
    return 0;
}

void print_pyramid(int height) {
    if (height < 1 || height > 30) {
        std::cout << "Введите другое значение (из диапазона от 1 до 30): ";
        return;
    }
    for (int i = 1; i <= height; i++) {
        for (int j = 0; j < height - i; j++) {
            std::cout << " ";
        }
        for (int j = 0; j < i * 2; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}