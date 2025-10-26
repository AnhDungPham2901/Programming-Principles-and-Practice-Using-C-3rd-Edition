/*
[6] Write a program that prompts the user to enter three integer values, 
and then outputs the values in numerical sequence separated by commas. 
So, if the user enters the values 10 4 6, the output should be 4, 6, 10. 
If two values are the same, they should just be ordered together. So, 
the input 4 5 4 should give 4, 4, 5.
*/

#include "../../PPPHeaders.h"

int main() {
    int num1 = -1; 
    int num2 = -1; 
    int num3 = -1;
    cout << "Please input 3 integers\n";
    cin >> num1 >> num2 >> num3;

    int position1 = -1; 
    int position2 = -1; 
    int position3 = -1;

    if(num1 < num2) {
        if(num1 < num3) {
            position1 = num1;
            if(num2 < num3) {
                position2 = num2;
                position3 = num3;
            } else {
                position2 = num3;
                position3 = num2;
            }
        } else {
            position1 = num3;
            position2 = num1;
            position3 = num2;
        }
    } else {
        if(num2 > num3) {
            position1 = num3;
            position2 = num2;
            position3 = num1;
        } else {
            position1 = num2;
            if(num1 < num3) {
                position2 = num1;
                position3 = num3;
            } else {
                position2 = num3;
                position3 = num1;
            }
        }
    } 
    cout << position1 << ", " << position2 << ", " << position3 << '\n';
    return 0;
}