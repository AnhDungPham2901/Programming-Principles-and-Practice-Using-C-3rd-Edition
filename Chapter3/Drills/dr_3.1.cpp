/*
[1] Write a program that consists of a while-loop that (each time around the loop) 
reads in two ints and then prints them. Exit the program when a terminating '|' is entered.
*/
#include "../../PPPHeaders.h"

int main() {
    int number_1 = -1;
    int number_2 = -1;
    int input;
    cout << "Please input 2 intergers. Enter after you input a number \n";
    while(cin >> input) {
        number_1 = input;
        cin >> input;
        number_2 = input;
        
        cout << "You input: " << number_1 << " " << number_2 << '\n';
    }
    return 0;
}