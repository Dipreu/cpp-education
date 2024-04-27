#include<iostream>
#include"IntegerArray.h"

//������� ��� ����� � ���������� ������ n �������� ������� a.
void input_array(int a[], int n) {
	

	for (int i = 0; i < n; ++i) {
		std::cin >> a[i];
	}

}

//������� ��� ������ �� ����� ������ n �������� ������� a.
void display_array(int a[], int n) {



	for (int i = 0; i < n; ++i) {
		std::cout << a[i]<< " ";
	}
	std::cout << "\n";

}

//������� ��� ����������� ������ n ��������� ������� a2 � ��������������� �������� ������� a1.
void copy_array(int a[], int a1[], int n) {
	
	
	std::cout << "����� ����������� ������ ��������� ������� �1 � ��������������� ������� � �� ��������... \n";

	for (int i = 0; i < n; ++i) {
		a1[i] = a[i];
	}


}

// ������� ��� ���������� �������� �������� ��� 2 ������ ����� ������� a
int average(int a[], int n) {


	double sum = 0;
	for (int i = 0; i <= 1; ++i) {
		sum += a[i];
	}
	return static_cast<double>(sum / 2);

}

//������� ��� ���������� �������� �������� ���� ����� ������� �
int average_1(int a[], int n) {


	double sum = 0;
	for (int i = 0; i <= n; ++i) {
		sum += a[i];
	}
	return static_cast<double>(sum / n);

}

//�������, ������� ��������� � ���������� �������������������� ���������� ������ n ��������� ������� a.
double standard_deviation(int a[], int n) {

	double avg = average_1(a, n);
	double sum = 0;
	for (int i = 0; i < n; i++) {
		sum += pow(a[i] - avg, 2);
	}
	return sqrt(sum / n);
}




