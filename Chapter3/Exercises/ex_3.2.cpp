/*
[2] Write a program that reads a string from input and then, 
for each character read, prints out the character and its integer value on a line.
*/

#include "../../PPPHeaders.h"


int main() {
    cout << "Please input a character \n";
    string input;
    cin >> input;
    for(char c:input) {
        cout << "Chacter " << c << ": " << (int) c << " ";
    }
    cout << '\n';
    return 0;
}