/*
To see what an uncaught exception error looks like, 
run a small program that uses error() without catching any exceptions.
*/

#include "../../PPPHeaders.h"

void error_new(string s1, string s2) {
    throw runtime_error(s1 + s2);
}

int main() {
    vector<int> v = {1,2};
    int i;
    cout << "what element you want? \n"; // type negative index to test uncatch exception
    cin >> i;
    if(i>= 2)
        error_new("out of range man ", "you must input under 2\n");
    cout << "v[" << i << ']' << "==" << v[i] << '\n';
    return 0;
}