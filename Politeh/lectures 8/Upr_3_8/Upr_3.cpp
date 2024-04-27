#include <iostream>
#include "windows.h"

int greatest_common_divisor(int m, int n);

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int m, n;
    std::cout << "Введите два числа m и n через пробел, с условием (m < n) ";
    std::cin >> m >> n;

    if (m <= 0 || n <= 0 || m >= n) {
        std::cout << "Вы ввели неправильные числа, m должно быть положительным и меньше n" << std::endl;
    }
    else {
        int gcd = greatest_common_divisor(m, n);
        std::cout << "НОД для  " << m << " и " << n << " равен " << gcd << std::endl;
    }

    return 0;
}

int greatest_common_divisor(int m, int n) {
    if (m == 0) {
        return n;
    }
    return greatest_common_divisor(n % m, m);
}
