/*
Try This
Implement square() without using the multiplication operator; 
that is, do the x*x by repeated addition (start a variable result at 0 and add x to it x times)
. Then run some version of “the first program” using that square().
*/

#include "../../PPPHeaders.h"

double square(double x) {
    double result = 0;
    for(int i=0; i<x; ++i) {
        result += x;
    }
    return result;
}

int main() {
    cout << "Enter a number\n";
    double number = -1;
    cin >> number;
    double square_result = square(number);
    cout << number << " square == " << square_result << '\n';
    return 0;
}