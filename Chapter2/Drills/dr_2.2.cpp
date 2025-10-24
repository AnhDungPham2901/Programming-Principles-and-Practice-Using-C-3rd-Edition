#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Enter the first name of the person you want to write to" << '\n';
    string first_name;
    cin >> first_name;
    cout << "Dear " << first_name << ",\n"
            << " How are you? I'm fine. I miss you "
            << "I have just strated a new job as an AI Engineer. "
            << "How is your job?\n";
    return 0;
}