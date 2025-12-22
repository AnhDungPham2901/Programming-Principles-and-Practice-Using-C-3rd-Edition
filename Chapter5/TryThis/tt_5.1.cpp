// #include "../../PPPHeaders.h"
#include "../../std_lib_facilities.h"

class Token {
    public:
        char kind;
        double value;
        Token(char ch): kind(ch), value(0.0) {}
        Token(char ch, double val): kind(ch), value(val) {}

};


Token get_token() {
    char ch;
    cin >> ch;
    switch (ch)
    {
    case '(': case ')': case '+': case '-': case '*': case '/':
        return Token(ch);
    case '.': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
    {
        cin.putback(ch);
        double val;
        cin >> val;
        return Token('8', val);
    }
    default:
        error("Bad Token");
    }
}

double expression();
double term();

double primary() {
    Token t = get_token();
    switch(t.kind) {
        case '(':
        {
            double d = expression();
            t = get_token();
            if(t.kind != ')') error("') is expected");
            return d;
        }
        case '8':
            return t.value;
        default:
            error("primary expected \n");
    }
}

int main() {
    try {
        while(cin) {
            cout << "=" << expression() << '\n';
        }
        keep_window_open("~0");
        return 0;
    }
    catch(exception& e) {
        cerr << e.what() << endl;
        keep_window_open("~1");
        return 1;
    }
    catch(...) {
        cerr << "Exception \n";
        keep_window_open("~2");
        return 2;
    }
}

double term() {
    double left = primary();
    Token t = get_token();
    while(true) {
        switch (t.kind)
        {
            case '*':
                left *= primary();
                t = get_token();
                break;
            case '/':
            {
                double d = primary();
                if(d == 0) error("Divided by 0 \n");
                left /= d;
                t = get_token();
                break;
            }
            default:
                return left;
        }

    }
}



double expression() {
    double left = term();
    Token t = get_token();
    while(true) {
        switch(t.kind) {
            case '+':
                left += term();
                t = get_token();
                break;
            case '-':
                left -= term();
                t = get_token();
                break;
            default:
                return left;
        }
    }
}