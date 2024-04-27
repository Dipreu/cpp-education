#include<iostream>
#include"IntegerArray.h"

//Функция для ввода с клавиатуры первых n значений массива a.
void input_array(int a[], int n) {
	

	for (int i = 0; i < n; ++i) {
		std::cin >> a[i];
	}

}

//Функция для вывода на экран первых n значений массива a.
void display_array(int a[], int n) {



	for (int i = 0; i < n; ++i) {
		std::cout << a[i]<< " ";
	}
	std::cout << "\n";

}

//Функция для копирования первых n элементов массива a2 в соответствующие элементы массива a1.
void copy_array(int a[], int a1[], int n) {
	
	
	std::cout << "После копирования первых элементов массива а1 в соответствующие массива а мы получаем... \n";

	for (int i = 0; i < n; ++i) {
		a1[i] = a[i];
	}


}

// Функция для вычисления среднего значения для 2 первых чисел массива a
int average(int a[], int n) {


	double sum = 0;
	for (int i = 0; i <= 1; ++i) {
		sum += a[i];
	}
	return static_cast<double>(sum / 2);

}

//Функция для вычисления среднего значения всех чисел массива а
int average_1(int a[], int n) {


	double sum = 0;
	for (int i = 0; i <= n; ++i) {
		sum += a[i];
	}
	return static_cast<double>(sum / n);

}

//Функция, которая вычисляет и возвращает среднеквадратическое отклонение первых n элементов массива a.
double standard_deviation(int a[], int n) {

	double avg = average_1(a, n);
	double sum = 0;
	for (int i = 0; i < n; i++) {
		sum += pow(a[i] - avg, 2);
	}
	return sqrt(sum / n);
}




