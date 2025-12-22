#include "../../PPPHeaders.h"

int main() {
    cout << "Enter a char \n";
    char c;
    cin >> c;
    cout << "You typed in: " << c << '\n';

    cin.putback(c);
    cin >> c;
    cout << "After putback: " << c << '\n';
    return 0;
}

/* cin >> c will ask you to input if there is no char left in the stream. 
When we use putback, it brings 'something' to put in the stream. And when we call
cin >> c it wont ask because there is already a char
*/