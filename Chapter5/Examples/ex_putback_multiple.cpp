#include "../../PPPHeaders.h"

int main() {
    cout << "Enter a number \n";
    double c;
    cin >> c;
    cout << "You typed in: " << c << '\n';

    cin.putback(c);
    cin >> c;
    cout << "After putback: " << c << '\n';
    return 0;
}

/* putback only put back 1 character only. Cannot 
putback multiple ones. Thats why in this chapter, we need
to design putback of Token_stream to solve the 
program of pushing back token, not pushing back
character.
*/