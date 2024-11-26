#include <iostream>
using namespace std;

int main() {
    // Declare an array of 5 integers
    int nums[5], sum = 0, product = 1;

    // Prompt the user to enter 5 integers
    cout << "Enter 5 integers: ";
    // Store the values into the array
    for (int i = 0; i < 5; i++) {
        cin >> nums[i];
        sum += nums[i]; // Adding array elements
        product *= nums[i]; // Multiplying array elements
    }

    // Output the sum of the array elements
    cout << "The sum of the array elements using for loop =: " << sum << endl;

    // Output the product of the array elements
    cout << "The product of the array elements using for loop =: " << product << endl;

    // Output the mean of the array elements
    cout << "The mean of the array elements using 5 =: " << (sum / 5) << endl;
    cout << "The mean of the array elements using sizeof(nums) =: " 
         << (sum / (sizeof(nums) / 4)) << endl;

    // Print a value that is out of the array range
    cout << "Value at index 5: " << nums[5] << endl;

    // Print the values using a foreach loop
    cout << "You entered the following elements:\n";
    for (int i : nums) {
        cout << i << endl;
        sum += i; // Adding array elements
        product *= i; // Multiplying array elements
    }

    // Output the sum of the array elements
    cout << "The sum of the array elements using foreach =: " << sum << endl;

    // Output the product of the array elements
    cout << "The product of the array elements using foreach loop =: " << product << endl;

    return 0;
}   