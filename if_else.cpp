#include <iostream>

using namespace std;

int main() {
    double score;
    cout << "Enter the student's score: ";
    cin >> score;
    string message;

    if (score > 50) {
        message = "Passed";
    } else {
        message = "Failed";
    }

    cout << message << endl;
    

    return 0;
}