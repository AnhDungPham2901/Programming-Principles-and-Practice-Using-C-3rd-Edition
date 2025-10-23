#include "PPP.h"

int main() {
    string current;
    string previous;
    int number_of_words = 0;
    while(cin >> current) {
        ++number_of_words;
        if(previous == current) {
            cout << "Word number: " << number_of_words << " Repeated words: " << current << '\n';
        }
        previous = current;
    }
    return 0;
}
