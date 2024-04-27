#include<iostream>
using namespace std;
 
int main() {

    double x, y, z;

    char op;

    cin >> x; 
    cin >> y;
    cin >> op;

    switch (op) {
    case '+': {
        z = x + y;
        break;
    }
    case '-': {
        z = x - y;
        break;
    }
    case '*': {
        z = x * y;
        break;
    }
    case '/': {
        z = x / y;
        break;
    }
    default: {
        cout << "Error" << endl;
    }
    }
    cout << z << endl;

}