/* [4] Do exercise 3 again, but this time handle the error inside ctok().
*/

#include "../../PPPHeaders.h"

double ctok(double c)                 // converts Celsius to Kelvin
{
    // c must be >= -273.15
    if(c < -273.15) error("the temperature must be >= -273.15");
    double k = c + 273.15;
    return k;
}

int main()
{
    double c = 0;
    cin >> c;
    double k = ctok(c);
    cout << k << '\n' ;
}