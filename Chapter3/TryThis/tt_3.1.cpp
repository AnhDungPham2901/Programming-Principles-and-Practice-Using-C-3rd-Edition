/*
Try This

Use the example above as a model for a program that converts yen ('y'), 
kroner ('k'), and pounds ('p') into dollars. If you like realism, you can find conversion rates on the Web.
*/

#include "../../PPPHeaders.h"

int main() {
    char currency = ' ';
    double amount = 1;
    constexpr double usd_to_yen = 152.74;
    constexpr double usd_to_kroner = 10.00;
    constexpr double usd_to_pounds = 0.75;


    cout<< "Please enter an amount followed by its currency (y or k or p):\n";
    cin >> amount >> currency;

    if (currency == 'y')
        cout << amount << "yen == " << amount/usd_to_yen << "dollars\n";
    else if (currency == 'k')
        cout << amount << "kroner == " << amount/usd_to_kroner << "dollars\n";
    else if (currency == 'p')
        cout << amount << "pounds == " << amount/usd_to_pounds << "dollars\n";
    else
         cout << "Sorry, I don't know a currency called '" << currency << "'\n";
    return 0;
}