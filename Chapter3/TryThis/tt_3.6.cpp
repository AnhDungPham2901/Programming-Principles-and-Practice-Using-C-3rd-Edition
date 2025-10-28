#include "../../PPPHeaders.h"

bool is_not_in_disliked_words(string word, vector<string> disliked_words) {
    for(int i=0; i<disliked_words.size(); ++i) {
        if(word == disliked_words[i])
            return false;
    }
    return true;
}

int main() {
    vector<string> disliked_words = {"Broccoli", "Haha" ,"Test"};
    cout << "Please enter words you want to print out \n";

    vector<string> words;
    for(string temp; cin >> temp;) {
        words.push_back(temp);
    }

    bool is_not_in_disliked_words(string word, vector<string> diskliked_words);
    
    for(int i=0; i<words.size(); ++i) {
        if(is_not_in_disliked_words(words[i], disliked_words))
            cout << words[i] << ' ';
    }
    cout << '\n';
    return 0;
}