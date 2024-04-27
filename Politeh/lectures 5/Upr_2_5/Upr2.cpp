#include <iostream>
#include<windows.h>


void print_pyramid(int height);

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int inputHeight;
    std::cout << "��� ��������� �������� �� ������ '��������' �������� ������.\n";
    do {
        std::cout << "������� ������ ��������: ";
        std::cin >> inputHeight;
    } while (inputHeight < 1 || inputHeight > 30); // ������ �����, ���� �������� �� ����� ��������
    print_pyramid(inputHeight);
    return 0;
}

void print_pyramid(int height) {
    if (height < 1 || height > 30) {
        std::cout << "������� ������ �������� (�� ��������� �� 1 �� 30): ";
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