#include <iostream>
#include "windows.h"

using namespace std;

int fibonacci(int n);


int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n;
    cout << "������� ���������� ����� ����� ���������: ";
    cin >> n;

    cout << "� ������������������ ������ " << n << " ������������ ����� ��������� " << fibonacci(n) << std::endl;

    return 0;
}



int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}