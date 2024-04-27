#include <iostream> 
#include <windows.h> 
#include <iomanip> 


using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    unsigned char a, b, c;
    cout << "Введите букву\n";
    cin >> a;
    b = a + 32;
    c = a - 32;
    if (a >= 192 && a <= 223) {
        cout << "Букве " << a << " Соответсвует прописная буква " << b;
    }
    else if (a >= 224 && a <= 255) {
        cout << "Букве " << a << " Соответсвует строчная буква " << c;
    }
    else {
        cout << "Символ " << a << " не является буквой";
    }

    return 0;
}