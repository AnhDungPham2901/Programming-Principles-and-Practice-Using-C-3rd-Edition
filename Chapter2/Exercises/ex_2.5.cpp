/*
[4] Write a program that prompts the user to enter two integer values. 
Store these values in int variables named val1 and val2. Write your program to determine 
the smaller, larger, sum, difference, product, and ratio of these values and report 
them to the user.
*/

#include "../../PPPHeaders.h"

int main() {
    double val1;
    double val2;

    cout << "Please enter 2 floating-points values. Inputs are separed by a space!\n";
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

/*
Are the results the same? The same execpt the ratio
Should they be? yes they should be the same. Because no matter our program is, when user 
input 2 5, the ratio must be 0.4 intead of 0 as the 2.4 program.

What’s the difference?
2.4 int/int applies int division so narrowing converstions. We dont have this problem 
with 2.5 program when we use double to store the numbers.
*/