#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int year_now = 0, age_now = 0, another_year = 0, another_age = 0, month_now = 0, month_of_birth = 0, another_month = 0, eror =0, another_month_year =0;
	
	cout << "¬ведите текущий год и нажмите ENTER.\n";
	cin >> year_now;

	cout << "¬ведите текущий мес€ц и нажмите ENTER.\n";
	cin >> month_now;

	if (month_now < 1 || month_now > 12) {
		cout << "Eror\n";
	    cin >> eror;
	}

	cout << "¬ведите свой возраст (в годах).\n";
	cin >> age_now;

	cout << "¬ведите мес€ц своего рождени€ и нажмите ENTER.\n";
	cin >> month_of_birth;

	if (month_of_birth < 1 || month_of_birth > 12) {
		cout << "Eror\n";
		cin >> eror;
	}

	cout << "¬ведите год, дл€ которого вы хотите узнать свой возраст.\n";
	cin >> another_year;

	cout << "¬ведите мес€ц этого года.\n";
	cin >> another_month_year;

	another_age = another_year - (year_now - age_now);



	if (another_month > month_of_birth) {
		return abs(another_month_year -= month_of_birth);
	}


	if (another_age >= 150) {
		cout << "»звините, но вы вр€д ли доживете до " << another_year << " года!";
	}

	else if (another_age >= 0)
	{
		cout << "¬ " << another_year << " году вам будет ";
		cout << another_age << "лет";

		cout << " и" ;
		cout << another_month_year << "мес€ца \n";
	}
	else
	{
		cout << "¬ " << another_year << " вы еще не родились!\n";
	}

	return 0;
}