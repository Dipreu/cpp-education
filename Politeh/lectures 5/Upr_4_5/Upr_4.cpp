#include <iostream>  
#include<windows.h>  
using namespace std;

enum class Day {
    Monday, Tuesday, Wednesday, Thursday,
    Friday, Saturday, Sunday
};

void print_day(Day day, ostream& os);
int closing_time(Day day_of_the_week);

// Главная функция  
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // Печать заголовка таблицы  
    cout.width(17);
    cout << "ДЕНЬ";
    cout.width(19);
    cout << "ВРЕМЯ ЗАКРЫТИЯ \n\n";

    // Печать таблицы от понедельника (Day::Monday) до  
    // воскресенья (Day::Sunday)  
    for (int count = static_cast<int>(Day::Monday);
        count <= static_cast<int>(Day::Sunday); count++)
    {
        cout.width(19);
        print_day(static_cast<Day>(count), cout);
        cout.width(9);
        cout << closing_time(static_cast<Day>(count)) << ":00\n";
    }
    return 0;
}
// Конец главной функции  

// Функция, возвращающая время закрытия магазина  
// в заданный день недели  
int closing_time(Day day_of_the_week)
{
    switch (day_of_the_week) {
    case Day::Monday:
        return 18;
    case Day::Tuesday:
        return 18;
    case Day::Wednesday:
        return 20;
    case Day::Thursday:
        return 18;
    case Day::Friday:
        return 18;
    case Day::Saturday:
        return 17;
    case Day::Sunday:
        return 13;
    default:
        return -1; // Это может быть код ошибки, если день недели не распознан  
    }
}

void print_day(Day day, ostream& os) {
    switch (day) {
    case Day::Monday:
        os << "Понедельник";
        break;
    case Day::Tuesday:
        os << "Вторник";
        break;
    case Day::Wednesday:
        os << "Среда";
        break;
    case Day::Thursday:
        os << "Четверг";
        break;
    case Day::Friday:
        os << "Пятница";
        break;
    case Day::Saturday:
        os << "Суббота";
        break;
    case Day::Sunday:
        os << "Воскресенье";
        break;
    default:
        os << "ОШИБКА!";
    }
}


//Пояснение: а)
//Если заменить оператор switch на строку cout << static_cast<Day>(count), 
//то вместо печати названия дня недели будет напечатано числовое значение перечислимого типа Day, 
// которое не будет иметь смысла для юзера.
//При замене switch на вызов функции print_day(static_cast<Day>(count), cout); 
//и определении её с помощью записи конструкции switha, 
//это позволит передать поток стандартного вывода cout в функцию print_day и печатать названия дней недели.
