/* [3] Absolute zero is the lowest temperature that can be reached; 
it is -273.15C, or 0K. The above program, even when corrected, 
will produce erroneous results when given a temperature below this. 
Place a check in the main program that will produce an error if a temperature is given below -273.15C.
*/

#include "../../PPPHeaders.h"

double ctok(double c)                 // converts Celsius to Kelvin
{
    double k = c + 273.15;
    return k;
}

int main()
{
    double c = 0;
    cin >> c;
    // c must be >= -273.15
    if(c < -273.15) error("the temperature must be >= -273.15");
    double k = ctok(c);
    cout << k << '\n' ;
}