#include "PPP.h"

int main() {
    cout << "Please enter a floating-point value \n";
    int n = 0;
    cin >> n;
    cout << "n == " << n
            << "\n n+1 == " << n+1
            << "\n there times n == " << 3 * n
            << "\n twice n == " << n * 2
            << "\n n squared == " << n * n
            << "\n half of n == " << n/2
            << "\n n mod 2 == " << n%2
            << "\n square root of n == " << sqrt(n)
            << "\n";
    return 0;
}