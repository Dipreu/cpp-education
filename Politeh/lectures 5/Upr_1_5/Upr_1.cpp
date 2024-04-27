#include<iostream>
#include<windows.h>
#include<string>
using namespace std;

bool numbers(int number);





int main() {




	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	cout<<"Программа проверяет является ли чсило простым\n";

	int score_1;

	cout << "Введите число для провреки(от 1 до 1000) \n";
	cin >> score_1;

	cout<< boolalpha << numbers(score_1);

}

bool numbers(int number) {

    if (number <= 1) 
        return false; // 1 и 0 не являются простыми числами
    

    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            return false; // Если число делится нацело на любое число от 2 до sqrt(number), оно не является простым
        }
    }

    return true;
}
