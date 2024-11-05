#include <iostream>
using namespace std;

int main() {
    double dig1, dig2;
    char operation; 
    int results;

    cout << "Enter two digits: ";
    cin >> dig1 >> dig2;
    
    cout << "Choose an operator (+, -, *, /): "<< endl;
    cin >>operation;

    switch (operation) {
        case '+':
            cout << dig1 << " + " << dig2 << " = " << dig1 + dig2 << endl;
            break;
        case '-':
            cout << dig1 << " - " << dig2 << " = " << dig1 - dig2 << endl;
            break;
        case '*':
            cout << dig1 << " * " << dig2 << " = " << dig1 * dig2 << endl;
            break;
        case '/':
            if (dig2 != 0)
                cout << dig1 << " / " << dig2 << " = " << dig1 / dig2 << endl;
            else
                cout << "Error! Division by zero." << endl;
            break;
        default:
            cout << "Error! Operator is not correct." << endl;
            break;
    }

    return 0;
}