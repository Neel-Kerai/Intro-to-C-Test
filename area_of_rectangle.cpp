#include <iostream>
using namespace std;

int main() {
    //variables
    int length, width, area;
    //user prompts
    cout << "Enter the length of the rectangle: ";
    //user input
    cin >> length;
    
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    //programming logic
    area = length * width;
    
    cout << "The area of the rectangle is= " << area << endl;
    return 0;
}