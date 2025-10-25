#include "../../PPPHeaders.h"

int main() {
    cout << "Enter the first name of the person you want to write to" << '\n';
    string first_name;
    cin >> first_name;

    string friend_name;
    cout << "Enter the first name of another friend that you want to metion" << '\n';
    cin >> friend_name;

    int age;
    cout << "Enter the age of the receipient \n";
    cin >> age;

    if((age < 0) || (age > 110)) {
        error("You're kidding! \n");
    }
    else {
        cout << "Dear " << first_name << ",\n"
                << " How are you? I'm fine. I miss you \n"
                << "I have just strated a new job as an AI Engineer.\n"
                << "How is your job?\n"
                << "Have you seen " << friend_name << " lately?\n"
                << "I hear you just had a birthday and you are " << age << " years old\n";
        if(age < 12) {
                cout << "Next year you will be " << age + 1 << ".\n";
        } else if (age == 17)
        {
            cout << "Next year you will be able to vote.\n";
        } else if (age > 70)
        {
            cout << "Are you retired?\n";
        }
        cout << "Yours sincerely,";
        cout << '\n' << '\n';
        cout << "Daniel Pham\n";
    }
    return 0;
}