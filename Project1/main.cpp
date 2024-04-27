#include <cmath>
#include "source1.cpp"
#include <iostream>
#include <string>
using namespace std;





int main() {
    int x, y, z;
    char op;
    cin >> x >> y;
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
        cout << "Eror" << endl;
    }
    }
    cout << z << endl;
}

    

