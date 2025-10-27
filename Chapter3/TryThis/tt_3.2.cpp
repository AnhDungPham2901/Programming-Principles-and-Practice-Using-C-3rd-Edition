/*
Try This

Rewrite your currency converter program from the previous 
TRY THIS to use a switch-statement. Add a conversion from Swiss francs. 
Which version of the program is easier to write, understand, and modify? Why?
*/

#include "../../PPPHeaders.h"

int main() {
    char currency = ' ';
    double amount = 1;
    constexpr double usd_to_yen = 152.74;
    constexpr double usd_to_kroner = 10.00;
    constexpr double usd_to_pounds = 0.75;
    constexpr double usd_to_swiss_franc = 0.80;


    cout<< "Please enter an amount followed by its currency (y or k or p):\n";
    cin >> amount >> currency;

    switch(currency) {
        case 'y':
            cout << amount << "yen == " << amount/usd_to_yen << "dollars\n";
            break;
        case 'k':
            cout << amount << "kroner == " << amount/usd_to_kroner << "dollars\n";
            break;
        case 'p':
            cout << amount << "pounds == " << amount/usd_to_pounds << "dollars\n";
            break;
        case 's':
            cout << amount << "swiss franc == " << amount/usd_to_swiss_franc << "dollars\n";
            break;
        default:
            cout << "Sorry, I don't know a currency called '" << currency << "'\n";
            break;
    }

    return 0;
}

/* 
This version is better than if else program. Because the syntax is cleaner. And switch case is more 
suitable for comparing to large set of constants, its easier to extend, with if syntax we must add expressions 
to group, but with switch case, we can easily group new cases. For example if currency XYZ has the same exchange
ratio with pounds, we can easily add into case 'p', but with if we need to use || to group and it becomes messy 
when the group is big.
*/