#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Declaration of the variables that are going to be assigned values and be used in the output statement
    double totalBookPrice;
    int numBooks;
    double tax;
    int shippingCharge;
    double price;

    // Taking inputs and storing them into the variables for the total book price and number of books
    cout << "Please enter total book price:" << endl;
    cin >> totalBookPrice;
    cout << "Please enter the total number of books" << endl;
    cin >> numBooks;

    // Assigning values to the remaining variables based on the variables that took inputs above
    tax = 0.075 * totalBookPrice;
    shippingCharge = 2 * numBooks;
    price = totalBookPrice + tax + shippingCharge;

    // Output statement that uses the total price variable truncated at 2 decimal places to accurately represent money
    cout << "The total price of the order is: $" << fixed << setprecision(2) << price << endl;

    return 0;
}

