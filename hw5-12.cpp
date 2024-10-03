//hw5-12.cpp - displays the total owed
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double price1, price2, total;

    // Input prices
    cout << "Enter the price of the first item: ";
    cin >> price1;
    cout << "Enter the price of the second item: ";
    cin >> price2;

    // Calculate total price
    if (price1 <= price2) {
        total = price1 + (price2 * 0.5);
    } else {
        total = (price1 * 0.5) + price2;
    }

    // Display the total price in fixed-point notation with two decimals
    cout << fixed << setprecision(2);
    cout << "Total amount owed: $" << total << endl;

    return 0;
}
