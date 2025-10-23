#include "PPP.h"

int main() {
    string previous;
    string current;
    while(cin >> current) {
        if(previous == current) {
            cout << "Repeated word: " << current << "\n";
        }
        previous = current;
    }
    return 0;
}

/*
Try This

Get the “repeated word detection program” to run. 
Test it with the sentence She she laughed "he he he!" because what he did did not look very very good good. 
How many repeated words were there? Why? 
What is the definition of word used here? What is the definition of repeated word? 
(For example, is She she a repetition?)
*/

// there were 3 repeated words: did, very and good
// Why?? because the 3 words have exactly the same 1 more word in the sentence 
// definition of word used here? word is all the chacters between 2 whitespaces
// the defniition of repeeated word here is: must be exactly the same and they consider case sensitive