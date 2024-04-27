#include <iostream> 
#include <iomanip> 
#include <windows.h> 

using namespace std;

int max_cel, min_cel, step_cel, cel, i;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "������� ����������� ����������� �� �������.\n";
    cin >> min_cel;
    cout << "������� ������������ ����������� �� �������.\n";
    cin >> max_cel;
    cout << "������� ��� ���������� ����������� �� �������\n";
    cin >> step_cel;

    cout << "������ ����� ���� ���������� ����, ��� ������ ���������...\n";
    cout << "��������� �������� ����������� �������� �������� �������, ������ ������������ ��� � ���������� � ��������� ��������� � ������� �� ���������� � ��������.\n";
    cout << "����� ��������� ���������� � ������������ �������� �����, ������� ������������ ������ � ����������, (��� ���������� ��������) � ����� ��������� ��� �������� � ������� �� ���������� � ��������.\n";
    cout << "��� ����� ������������ ���� ��������� �� ����� �� ������������� �������� �������� �� �������, ������� ������������ ������ � ���������� �����.\n\n";
    cout << "�� ����� ����������� �������� �������� �� ������� ������ " << min_cel << "\n";
    cout << "�� ���������� ������������ �������� �������� �� ������� ������ " << max_cel << "\n";
    cout << "� ���� ���������� ��������� ������ ��� � ���������� �������� ������� �� " << step_cel << "\n\n";



    double farengeit = 0, kelvin = 0;


    cout << setiosflags(ios::left);

    cout.width(20);
    cout << "�������";
    cout.width(20);
    cout << "���������";
    cout << "�������\n\n";

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