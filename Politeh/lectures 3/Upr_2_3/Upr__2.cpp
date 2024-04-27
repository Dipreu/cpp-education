#include <iostream> 
#include <iomanip>
#include <windows.h> 
#include"conversions.h"


using namespace std;

int max_cel, min_cel, step_cel, cel, i;

//Объявление функции: печать сообщения, поясняющего значение программы
void print_preliminary_message();

//Объявление функции: запрос параметров таблицы с клавиатуры
void input_table_specifications();

//Объявление функции: повторное отображение параметров, введённых пользователем
void print_message_echoing_input();

//Объявление функции: печать таблицы температур
void print_table(double farengeit_2, double kelvin_2);


int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    //Реализация функции: печать сообщения, поясняющего значение программы
    print_preliminary_message();

    //Реализация функции: запрос параметров таблицы с клавиатуры
    input_table_specifications();

    //Реализация функции: повторное отображение параметров, введённых пользователем
    print_message_echoing_input();



    cout << setiosflags(ios::left);

    cout.width(20);
    cout << "Цельсий";
    cout.width(20);
    cout << "Фаренгейт";
    cout << "Кельвин\n\n";

    cout.setf(ios::fixed);
    cout.precision(2);

    double farengeit = 0.0, kelvin = 0.0;

    for (int cel = 0; cel <= max_cel; cel += step_cel)
    {
        i = cel;
        double farengeit = 0.0, kelvin = 0.0;

        //Реализация функций: Запрос градусов по Фарингейту и Кельвину
        fahrenheit_of(farengeit, cel);
        absolute_value_of(kelvin, cel);

        //Реализация функции: печать таблицы температур
        print_table(fahrenheit_of(farengeit, cel), absolute_value_of(kelvin, cel));



    }
    if (max_cel % step_cel != 0) {

        i += max_cel % step_cel;

        farengeit = 1.8 * i + 32;
        kelvin = i + 273.15;

        cout.width(20);
        cout << i;
        cout.width(20);
        cout << farengeit;
        cout << kelvin << "\n";
    }

    return 0;
}



//Инициализация функции: печать сообщения, поясняющего значение программы
void print_preliminary_message() {
    cout << "Эта программа выводит на экран значения температуры в разных шкалах\n";
}

//Инициализация функции: запрос параметров таблицы с клавиатуры
void input_table_specifications() {

    cout << "Введите минимальную температуру по цельсию\n";
    cin >> min_cel;
    cout << "Введите максимальную температуру по цельсию\n";
    cin >> max_cel;
    cout << "Введите шаг увелечения температуры по цельсию\n";
    cin >> step_cel;

}

//Инициализация функции: повторное отображение параметров, введённых пользователем
void print_message_echoing_input() {
    cout << "Вы ввели минимальное значение градусов по цельсию равное " << min_cel << "\n";
    cout << "Вы обозначили максимальное значению градусов по цельсию равное " << max_cel << "\n";
    cout << "И дали программме установку делать шаг в увеличении градусов цельсия на " << step_cel << "\n\n";
}

//Инициализация функции: печать таблицы температур
void print_table(double farengeit_2, double kelvin_2) {



    cout.width(20);
    cout << i;
    cout.width(20);
    cout << farengeit_2;
    cout << kelvin_2 << "\n";

}