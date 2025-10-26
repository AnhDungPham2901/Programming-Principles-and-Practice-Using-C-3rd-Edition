/*
[7] Do exercise 6, but with three string values. 
So, if the user enters the values Steinbeck, Hemingway, Fitzgerald, 
the output should be Fitzgerald, Hemingway, Steinbeck.
*/

#include "../../PPPHeaders.h"

int main() {
    string str1; 
    string str2; 
    string str3;
    cout << "Please input 3 strings\n";
    cin >> str1 >> str2 >> str3;

    string position1; 
    string position2; 
    string position3;

    if(str1 < str2) {
        if(str1 < str3) {
            position1 = str1;
            if(str2 < str3) {
                position2 = str2;
                position3 = str3;
            } else {
                position2 = str3;
                position3 = str2;
            }
        } else {
            position1 = str3;
            position2 = str1;
            position3 = str2;
        }
    } else {
        if(str2 > str3) {
            position1 = str3;
            position2 = str2;
            position3 = str1;
        } else {
            position1 = str2;
            if(str1 < str3) {
                position2 = str1;
                position3 = str3;
            } else {
                position2 = str3;
                position3 = str1;
            }
        }
    } 
    cout << position1 << ", " << position2 << ", " << position3 << '\n';
    return 0;
}