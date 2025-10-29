/*
    [3] Augment the program so that it writes the line the numbers are equal 
    (only) if they are equal.
*/
#include "../../PPPHeaders.h"

vector<int> sort_numbers(int num1, int num2) {
    vector<int> results;
    if(num1 > num2) {
        results.push_back(num2);
        results.push_back(num1);
    } else {
        results.push_back(num1);
        results.push_back(num2);
    }
    return results;
}

bool are_equal(int num1, int num2) {
    if(num1 == num2)
        return true;
    return false;
}

int main() {
    int number_1 = -1;
    int number_2 = -1;
    int input = -1;
    vector<int> sort_numbers(int num1, int num2);
    bool are_equal(int num1, int num2);

    cout << "Please input 2 intergers. Enter after you input a number \n";
    while(cin >> input) {
        number_1 = input;
        cin >> input;
        number_2 = input;

        if(are_equal(number_1, number_2))
            cout << "The numbers are equal \n";
        else {
            vector<int> results = sort_numbers(number_1, number_2);
            cout << "The smaller value is: " << results[0] << '\n';
            cout << "The larger value is: " << results[1] << '\n';
        }
    }
    return 0;
}