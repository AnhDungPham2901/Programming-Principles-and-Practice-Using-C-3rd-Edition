#include "../../PPPHeaders.h"


class Token {
    public:
        char kind;
        double value;
        Token(char k) : kind{k}, value{0.0}{} // construction from one value
        Token(char k, double v) : kind{k}, value{v} {} // construction from two values

}; 

Token get_token() {
}

int main() {
    Token t {'+'}; 
    return 0;
}