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

	cout << "������� �������� - ���������� ��������� � �������(�� 1 �� 5) \n";
	cin >> n;
	cout << "������� �������� ��� ������� �...\n";
	input_array(a, n);

	cout << "�������� ������� � = ";
	display_array(a, n);
	
	cout << "������� �������� ��� ������� �1...\n";
	input_array(a, n);

	copy_array(a, a1, n);
	display_array(a1, n);


    cout << "������� �������� ������ ���� �������� ������� � = " << average(a, n) << "\n";

	cout << "�������������������� ���������� ������ " << n << " ��������� ������� � = " << standard_deviation(a1, n);

	return 0;
}