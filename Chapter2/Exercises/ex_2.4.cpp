/*
[4] Write a program that prompts the user to enter two integer values. 
Store these values in int variables named val1 and val2. Write your program to determine 
the smaller, larger, sum, difference, product, and ratio of these values and report 
them to the user.
*/

#include "../../PPPHeaders.h"

int main() {
    int val1;
    int val2;

    cout << "Please enter 2 integer values. Inputs are separed by a space!\n";
    cin >> val1 >> val2;

    if(val1 > val2) {
        cout << "The smaller: " << val2 << '\n';
        cout << "The larger: " << val1 << '\n';
    } else if(val2 > val1) {
        cout << "The smaller " << val1 << '\n';
        cout << "The larger: " << val2 << '\n';
    } else {
        cout << "The 2 numbers are equal!\n";
    }
    cout << "Difference: " << abs(val1-val2) << '\n';
    cout << "Sum: " << val1 + val2 << '\n';
    cout << "Product: " << val1 * val2 << '\n';
    cout << "Ratio of these values: " << val1/val2 << '\n';
    return 0;
}