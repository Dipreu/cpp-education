#include<iostream>
#include<windows.h>
#include<string>
using namespace std;

bool numbers(int number);





int main() {




	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	cout<<"��������� ��������� �������� �� ����� �������\n";

	int score_1;

	cout << "������� ����� ��� ��������(�� 1 �� 1000) \n";
	cin >> score_1;

	cout<< boolalpha << numbers(score_1);

}

bool numbers(int number) {

    if (number <= 1) 
        return false; // 1 � 0 �� �������� �������� �������
    

    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            return false; // ���� ����� ������� ������ �� ����� ����� �� 2 �� sqrt(number), ��� �� �������� �������
        }
    }

    return true;
}
