/*
Try to compile those examples and see how the compiler responds.
int s1 = area(7,2;              // error: ) missing
int s2 = area(7,2)              // error: ; missing
Int s3 = area(7,2);             // error: Int (with a capitalized ’i’) is not a type
int s4 = area('7,2);            // error: non-terminated character ’; terminating ’ is missing)
*/

#include "../../PPPHeaders.h"

int main() {
    int area(int length, int width);

    // int s1 = area(7,2; // error message: expected ')' before ';' token
    // int s2 = area(7,2) // error message: expected ',' or ';' before 'return'
    // Int s3 = area(7,2); // error mesage: 'Int' was not decleared in this scope; did you mean 'int'?
    // int s4 = area('7, 2); // error messages (there are 2 errors foud): missing terminating ' character. And expected primaray-expression before 'return'
    return 0;
}