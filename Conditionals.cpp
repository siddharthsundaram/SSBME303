#include <iostream>
using namespace std;

int main() {
    // Declaration of the character and decimal variable that are going to be used in the output statements
    char x;
    double y;

    // Outputs to prompt user inputs, which get stored into the above variables
    cout << "Please enter a single letter:" << endl;
    cin >> x;
    cout << "Please enter a number, decimals are OK:" << endl;
    cin >> y;

    // Conditional statements that determine what statement should be printed out based on what is stored in the variables
    if (x == 'A' || x == 'a' ||x == 'E' ||x == 'e' ||x == 'I' ||x == 'i' ||x == 'O' ||x == 'o' ||x == 'U' ||x == 'u')
    {
        cout << x << " is a vowel!" << endl;
    }
    else
    {
        cout << x << " is a consonant!" << endl;
    }
    if (y < 0)
    {
        cout << y << " is less than 0" << endl;
    }
    else if (y > 100)
    {
        cout << y << " is out of bounds." << endl;
    }
    else
    {
        cout << y << " is in range" << endl;
    }
    return 0;
}
