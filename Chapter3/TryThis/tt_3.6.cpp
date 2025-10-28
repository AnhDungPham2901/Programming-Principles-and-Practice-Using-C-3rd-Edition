#include "../../PPPHeaders.h"

int main() {
    string disliked = "Broccoli";

    cout << "Please enter words you want to print out \n";

    vector<string> words;
    for(string temp; cin >> temp;) {
        words.push_back(temp);
    }
    
    for(int i=0; i<words.size(); ++i) {
        if(words[i] != disliked) {
            cout << words[i] << ' ';
        }
    }
    cout << '\n';
    return 0;
}