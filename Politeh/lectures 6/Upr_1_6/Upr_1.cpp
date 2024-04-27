#include<iostream>
#include"IntegerArray.h"
#include "windows.h"
using namespace std;

const int max_len = 5;
typedef int	num_count[max_len];
num_count a;
num_count a1;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n = 0;

	cout << "¬ведите значение - количество элементов в массиве(от 1 до 5) \n";
	cin >> n;
	cout << "¬ведите элементы дл€ массива а...\n";
	input_array(a, n);

	cout << "Ёлементы массива а = ";
	display_array(a, n);
	
	cout << "¬ведите элементы дл€ массива а1...\n";
	input_array(a, n);

	copy_array(a, a1, n);
	display_array(a1, n);


    cout << "—реднее значение первых двух символов массива а = " << average(a, n) << "\n";

	cout << "—реднеквадратическое отклонение первых " << n << " элементов массива а = " << standard_deviation(a1, n);

	return 0;
}