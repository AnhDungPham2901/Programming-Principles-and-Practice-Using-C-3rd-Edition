/*
[8] Write a program to test an integer value to determine if it is odd or even. 
As always, make sure your output is clear and complete. In other words, 
don’t just output yes or no. Your output should stand alone, 
like The value 4 is an even number. Hint: See the remainder (modulo) operator in §2.4.
*/
#include "../../PPPHeaders.h"

int main() {
    cout << "Please enter a number you want to test\n";
    int number = -1;
    cin >> number;
    if(number % 2 == 0) {
        cout << "The value " << number << " is an even number\n";
    } else if (number % 2 == 1) {
        cout << "The value " << number << " is an odd number\n";
    } else {
        cout << "Something wrong!";
    }
    return 0;
}