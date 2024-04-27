#include <iostream> 
#include <iomanip> 
#include <windows.h> 

using namespace std;

int max_cel, min_cel, step_cel, cel, i;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "ВВедите минимальную температуру по цельсию.\n";
    cin >> min_cel;
    cout << "Введите максимальную температуру по цельсию.\n";
    cin >> max_cel;
    cout << "Введите шаг увелечения температуры по цельсию\n";
    cin >> step_cel;

    cout << "Далеее будет идти объяснение того, что делает программа...\n";
    cout << "Программа принмает минимальное значение градусов цельсия, кторое пользователь ввёл с клавиатуры и переводит результат в градусы по Фаренгейту и Кельвину.\n";
    cout << "Далее программа прибавляет к минимальному значению число, которое пользователь вводил с клавиатуры, (как увелечение градусов) и также переводит это значение в градусы по Фаренгейту и Кельвину.\n";
    cout << "Так будет продолжаться пока программа не дойдёт до максимального значения градусов по цельсию, которое пользователь вводил с клавиатуры ранее.\n\n";
    cout << "Вы ввели минимальное значение градусов по цельсию равное " << min_cel << "\n";
    cout << "Вы обозначили максимальное значению градусов по цельсию равное " << max_cel << "\n";
    cout << "И дали программме установку делать шаг в увеличении градусов цельсия на " << step_cel << "\n\n";



    double farengeit = 0, kelvin = 0;


    cout << setiosflags(ios::left);

    cout.width(20);
    cout << "Цельсий";
    cout.width(20);
    cout << "Фаренгейт";
    cout << "Кельвин\n\n";

    cout.setf(ios::fixed);
    cout.precision(2);



    for (int cel = 0; cel <= 300; cel += step_cel)
    {
        farengeit = 1.8 * cel + 32;
        kelvin = cel + 273.15;

        cout.width(20);
        cout << cel;
        cout.width(20);
        cout << farengeit;
        cout << kelvin << "\n";

        i = cel;
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