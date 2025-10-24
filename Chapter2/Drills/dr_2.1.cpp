#include <iostream>
#include <string>
using namespace std;

// int main() {
//     cout << "Please enter your first name " << '\n';
//     string first_name; // default initializer = ""
//     cin >> first_name;
//     cout << "Hello, " << first_name << '\n';
//     return 0;
// }

int main() {
    cout << "Enter the first name of the person you want to write to" << '\n';
    string first_name;
    cin >> first_name;
    cout << "Dear " << first_name << ",\n";
    return 0;
}