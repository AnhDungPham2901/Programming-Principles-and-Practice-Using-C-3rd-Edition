/* [5] Add to the program so that it can also convert from Kelvin to Celsius.
*/

#include "../../PPPHeaders.h"

double ctok(double c)                 // converts Celsius to Kelvin
{
    // c must be >= -273.15
    if(c < -273.15) error("the temperature must be >= -273.15");
    double k = c + 273.15;
    return k;
}

double ktoc(double k)                 // converts Celsius to Kelvin
{
    // c must be >= -273.15
    if(k < 0) error("the temperature in K must be >= 0");
    double c = k - 273.15;
    return c;
}

int main()
{
    double c = 0;
    cin >> c;
    double k = ctok(c);
    cout << k << '\n' ;
}