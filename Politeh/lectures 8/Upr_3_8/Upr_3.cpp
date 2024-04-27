#include <iostream>
#include "windows.h"

int greatest_common_divisor(int m, int n);

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int m, n;
    std::cout << "������� ��� ����� m � n ����� ������, � �������� (m < n) ";
    std::cin >> m >> n;

    if (m <= 0 || n <= 0 || m >= n) {
        std::cout << "�� ����� ������������ �����, m ������ ���� ������������� � ������ n" << std::endl;
    }
    else {
        int gcd = greatest_common_divisor(m, n);
        std::cout << "��� ���  " << m << " � " << n << " ����� " << gcd << std::endl;
    }

    return 0;
}

int greatest_common_divisor(int m, int n) {
    if (m == 0) {
        return n;
    }
    return greatest_common_divisor(n % m, m);
}
