/*
[3] If we define the median of a sequence as “a number so that exactly as many 
elements come before it in the sequence as come after it,” fix the program in §3.6.3 
so that it always prints out a median. Hint: A median need not be an element of the sequence.
*/

#include "../../PPPHeaders.h"

int main() {
    vector<double> temps;
    for(double temp; cin >> temp;) {
        temps.push_back(temp);
    }

    ranges::sort(temps);
    if(temps.size() % 2 != 0) {
        cout << "Median temperature: " << temps[temps.size()/2] << '\n';
    } else {
        double upper = temps[temps.size()/2];
        double lower = temps[temps.size()/2 -1];
        double median = (upper + lower) / 2;
        cout << "Median temperature: " << median << '\n';
    }
    return 0;
}