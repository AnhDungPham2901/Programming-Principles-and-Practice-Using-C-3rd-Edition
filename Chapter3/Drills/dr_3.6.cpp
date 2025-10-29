/*
[6] Now change the body of the loop so that it reads just one double each 
time around. Define two variables to keep track of which is the smallest 
and which is the largest value you have seen so far. Each time through the 
loop write out the value entered. If it’s the smallest so far, write the smallest 
so far after the number. If it is the largest so far, write the largest so far after 
the number.
*/
#include "../../PPPHeaders.h"

int main() {
    double smallest_so_far;
    double largest_so_far;
    double input = -1;
    int i = 0;
    cout << "Please input 1 doubles. Enter after you input a number \n";
    while(cin >> input) {
        cout << "Input number: " << input << '\n';
        if(i==0) {
            smallest_so_far = input;
            largest_so_far = input;
            ++i; // never do this again, just for the first round
        }
        else {
            if(input < smallest_so_far) {
                smallest_so_far = input;
                cout << "The smallest number so far: " << input << '\n';
            }
            if(input > largest_so_far) {
                largest_so_far = input;
                cout << "The largest number so far: " << input << '\n';
            }

        }

    }
    return 0;
}