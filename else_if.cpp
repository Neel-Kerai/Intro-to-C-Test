#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Please Enter the age: ";
    cin >> age;

    if (age >= 7 && age < 8) {
        cout << "Admit to Grade School";
    } else if (age >= 5 && age < 6) {
        cout << "Admit to Kindergarten";
    } else if (age >= 3 && age < 4) {
        cout << "Admit to Pre-School";
    } else if (age >= 1 && age < 2) {
        cout << "Admit to Play Group";
    } else if (age >8) {
        cout << "The child is too old for our school";
    } else if (age <=0) {
        cout << "Reject. Child is too young";
    }

    return 0;
}