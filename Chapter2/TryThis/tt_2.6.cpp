#include "PPP.h"

int main() {
    double d = 0;
    while(cin >> d) {
        int i = d;
        char c = i;
        cout << "d==" << d
                << " i==" << i
                << " c==" << int(c)
                << " char(" << c << ")\n";
    }
    return 0;
}