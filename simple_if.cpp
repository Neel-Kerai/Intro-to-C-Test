#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 4) {
        cout << "Admitted, Proceed for registration" << endl;
    } else {
        cout << "Minimum age not reached" << endl;
    }

 //using ternary operators
 
    return 0;
}