#include "../../PPPHeaders.h"

int main() {
    cout << "Enter the first name of the person you want to write to" << '\n';
    string first_name;
    cin >> first_name;

    string friend_name;
    cout << "Enter the first name of another friend that you want to metion" << '\n';
    cin >> friend_name;

    cout << "Dear " << first_name << ",\n"
            << " How are you? I'm fine. I miss you "
            << "I have just strated a new job as an AI Engineer. "
            << "How is your job? "
            << "Have you seen " << friend_name << " lately? \n";
    return 0;
}