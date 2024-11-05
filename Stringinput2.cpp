#include <iostream>
using namespace std;

int main ()

{
    string myName, description;
  
    // Prompt user for their full name
    cout << "Please enter your full name: "; getline(cin, myName);
    
    // Prompt user for their description
    cout << "Please describe yourself: ";
    cin >> (description);
    getline(cin, description);

    // Print the user's name and description
    cout << "Your name is " << myName << endl;
    cout << "You said the following about yourself: " << description << endl;

    return 0;   
}
