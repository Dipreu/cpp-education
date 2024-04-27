
#include <iostream> 
#include <windows.h> 
#include <cmath> 


using namespace std;


double func(double x, int n)
{
    double result = 1;
    if (n == 0)
    {
        return 1;
    }
    else if (n > 0)
    {
        
        for (int i = 1; i <= n; i++)
        {
            result *= x;
        }
        return result;
    }
    else
    {
        
        for (int i = 1; i <= -n; i++)
        {
            result /= x;
        }
        return result;
    }
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double x;
    int n;

    cout << "¬ведите число x: ";
    cin >> x;

    cout << "¬ведите степень n: ";
    cin >> n;

    double result = func(x, n);

    cout << x << " в степени " << n << " равно: " << result << endl;

    return 0;
}