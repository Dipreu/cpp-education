#include <iostream> 
#include <iomanip>
#include <windows.h> 
#include"conversions.h"


using namespace std;

int max_cel, min_cel, step_cel, cel, i;

//���������� �������: ������ ���������, ����������� �������� ���������
void print_preliminary_message();

//���������� �������: ������ ���������� ������� � ����������
void input_table_specifications();

//���������� �������: ��������� ����������� ����������, �������� �������������
void print_message_echoing_input();

//���������� �������: ������ ������� ����������
void print_table(double farengeit_2, double kelvin_2);


int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    //���������� �������: ������ ���������, ����������� �������� ���������
    print_preliminary_message();

    //���������� �������: ������ ���������� ������� � ����������
    input_table_specifications();

    //���������� �������: ��������� ����������� ����������, �������� �������������
    print_message_echoing_input();



    cout << setiosflags(ios::left);

    cout.width(20);
    cout << "�������";
    cout.width(20);
    cout << "���������";
    cout << "�������\n\n";

    cout.setf(ios::fixed);
    cout.precision(2);

    double farengeit = 0.0, kelvin = 0.0;

    for (int cel = 0; cel <= max_cel; cel += step_cel)
    {
        i = cel;
        double farengeit = 0.0, kelvin = 0.0;

        //���������� �������: ������ �������� �� ���������� � ��������
        fahrenheit_of(farengeit, cel);
        absolute_value_of(kelvin, cel);

        //���������� �������: ������ ������� ����������
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



//������������� �������: ������ ���������, ����������� �������� ���������
void print_preliminary_message() {
    cout << "��� ��������� ������� �� ����� �������� ����������� � ������ ������\n";
}

//������������� �������: ������ ���������� ������� � ����������
void input_table_specifications() {

    cout << "������� ����������� ����������� �� �������\n";
    cin >> min_cel;
    cout << "������� ������������ ����������� �� �������\n";
    cin >> max_cel;
    cout << "������� ��� ���������� ����������� �� �������\n";
    cin >> step_cel;

}

//������������� �������: ��������� ����������� ����������, �������� �������������
void print_message_echoing_input() {
    cout << "�� ����� ����������� �������� �������� �� ������� ������ " << min_cel << "\n";
    cout << "�� ���������� ������������ �������� �������� �� ������� ������ " << max_cel << "\n";
    cout << "� ���� ���������� ��������� ������ ��� � ���������� �������� ������� �� " << step_cel << "\n\n";
}

//������������� �������: ������ ������� ����������
void print_table(double farengeit_2, double kelvin_2) {



    cout.width(20);
    cout << i;
    cout.width(20);
    cout << farengeit_2;
    cout << kelvin_2 << "\n";

}