/*
    [4] Change the program so that it uses doubles instead of ints.
*/
#include "../../PPPHeaders.h"

vector<double> sort_numbers(double num1, double num2) {
    vector<double> results;
    if(num1 > num2) {
        results.push_back(num2);
        results.push_back(num1);
    } else {
        results.push_back(num1);
        results.push_back(num2);
    }
    return results;
}

bool are_equal(double num1, double num2) {
    if(num1 == num2)
        return true;
    return false;
}

int main() {
    double number_1 = -1;
    double number_2 = -1;
    double input = -1;
    vector<double> sort_numbers(double num1, double num2);
    bool are_equal(double num1, double num2);

    cout << "Please input 2 doubles. Enter after you input a number \n";
    while(cin >> input) {
        number_1 = input;
        cin >> input;
        number_2 = input;

        if(are_equal(number_1, number_2))
            cout << "The numbers are equal \n";
        else {
            vector<double> results = sort_numbers(number_1, number_2);
            cout << "The smaller value is: " << results[0] << '\n';
            cout << "The larger value is: " << results[1] << '\n';
        }
    }
    return 0;
}