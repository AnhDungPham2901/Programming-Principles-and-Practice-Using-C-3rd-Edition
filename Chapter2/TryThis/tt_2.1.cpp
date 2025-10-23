
#include "PPP.h"

int main() {
    cout << "Please enter your first name and age\n";
    string name = "???";
    double age = -1;
    cin >> name >> age;
    cout << "Hello, " << name << " (age " << age * 12 << " months " << ")\n";
    return 0;
}