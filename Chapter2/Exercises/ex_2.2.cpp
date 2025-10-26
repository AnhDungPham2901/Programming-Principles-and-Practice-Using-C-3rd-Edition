/*
[2] Write a program in C++ that converts from miles to kilometers.
 Your program should have a reasonable prompt for the user to enter a number of miles. 
 Hint: A mile is1.609 kilometers.
*/

#include "../../PPPHeaders.h"

int main() {
    cout << "Enter a number of miles\n";
    double miles = 0;
    cin >> miles;

    cout << miles << " miles is: " << miles * 1.609 << " kilometers\n";
    return 0;
}