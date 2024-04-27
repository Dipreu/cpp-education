#include <iostream> 
#include "windows.h"


int binary_search(int value, int list[], int first, int last) {
    while (first <= last) {
        int mid = first + (last - first) / 2;

        if (list[mid] == value) {
            return mid;
        }
        else if (list[mid] < value) {
            first = mid + 1;
        }
        else {
            last = mid - 1;
        }
    }

    return -1;
}

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int n = 5;
    int* list = new int[n]; // динамическое выделение памяти

    std::cout << "Введите пять элементов списка, которые будут обрабатываться программой: \n";
    for (int i = 0; i < n; ++i) {
        std::cin >> list[i];
    }

    int value;
    std::cout << "Введите элемент, идекс которго вы хотели бы получить: ";
    std::cin >> value;

    int index = binary_search(value, list, 0, n - 1);

    if (index != -1) {
        std::cout << "Индекс вашего элемента: " << index << "\n";
    }
    else {
        std::cout << "Такого значения нет в списке.\n";
    }

    delete[] list; // освобождение памяти
    return 0;
}