#include <iostream> 
#include <string> 
#include "windows.h" 


const int m = 2;
const int n = 2;
const int r = 2;

void matrix_multiplication(int mat1[][n], int mat2[][r], int result[][r]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < r; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int mat1[m][n], mat2[n][r], result[m][r];

    std::cout << "¬ведите первую матрицу (размер " << m << "x" << n << "):" << std::endl;
    for (int i = 0; i < m; i++) {
        std::cout << "¬ведите " << n << " значени€ дл€ " << i + 1 << "-й строки (через пробелы): ";
        for (int j = 0; j < n; j++) {
            std::cin >> mat1[i][j];
        }
    }

    std::cout << "¬ведите вторую матрицу (размер " << n << "x" << r << "):" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << "¬ведите " << r << " значени€ дл€ " << i + 1 << "-й строки (через пробелы): ";
        for (int j = 0; j < r; j++) {
            std::cin >> mat2[i][j];
        }
    }

    matrix_multiplication(mat1, mat2, result);

    std::cout << "”ћЌќ∆»“№" << std::endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < r; j++) {
            std::cout << result[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
