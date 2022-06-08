#include <iostream>
using namespace std;

int main() {

    // Declaration and assignment of input string variable
    string input;
    cout << "Please type in a string or an array:" << endl;
    getline(cin, input);

    // Declaration of pointer character variable set to first character of string, and integer variable for string length
    char* c = &input.front();
    int l = input.length();

    // Outputs the characters of the string backwards
    cout << "The reverse string or array is: ";
    for (int i = l - 1; i >= 0; --i) {
        cout << c[i];
    }

    return 0;
}
