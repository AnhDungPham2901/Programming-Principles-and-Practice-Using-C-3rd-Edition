/*
Try This

The character 'b' is char(’a’+1), 'c' is char(’a’+2), etc. 
Use a loop to write out a table of characters with their corresponding integer values:

a      97
b      98
  ...
z      122
*/

#include "../../PPPHeaders.h" 

int main() {
    int i = 0;
    while(i<26) {
        cout << char('a' + i) << '\t' << int(char('a') + i) << '\n';
        ++i;
    }
    return 0;
}