/*
Try This

Rewrite the character value example from the previous TRY THIS to use a for-statement. 
Then modify your program to also write out a table of the integer values for uppercase letters and digits.

*/

#include "../../PPPHeaders.h" 

// int main() {
//     for(int i=0; i < 26; ++i) {
//         cout << char('a' + i) << '\t' << int(char('a') + i) << '\n';
//     }
//     return 0;
// }


int main() {
    for(int i=0; i < 128; ++i) {
        if((char(i) >= 'A') && (char(i) <= 'Z'))
            cout << char(i) << '\t' << int(char(i)) << '\n';
        if((char(i) >= '0') && (char(i) <= '9'))
            cout << char(i) << '\t' << int(char(i)) << '\n';
    }
    return 0;
}