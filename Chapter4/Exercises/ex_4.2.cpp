// // 2] The following program takes in a temperature value in Celsius and converts it to Kelvin. This code has many errors in it. Find the errors, list them, and correct the code.

// Click here to view code image

// double ctok(double c)                 // converts Celsius to Kelvin
// {
//          int k = c + 273.25;
//          return int
// }

// int main()
// {
//          double c = 0;                       // declare input variable
//          cin >> d;                              // retrieve temperature to input variable
//          double k = ctok("c");         // convert temperature
//          Cout << k << '/n' ;               // print out temperature
// }

// ERRORS: 
// 1. wrong fomular c + 273.15 not 273.25
// 2. k must be a double not int
// 3. d has not been defined, must be c 
// 4. ctok(c) not ctok("c")
// 5. count not cout
// 6. '\n' not '/n'


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
         double k = ctok(c);
         cout << k << '\n' ;
}