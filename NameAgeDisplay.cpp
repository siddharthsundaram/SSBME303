#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Declares all the variables that are going to be used
    string name1;
    int age1;
    string name2;
    int age2;
    string name3;
    int age3;
    string temp;

    // Asks the user questions and takes the inputs and stores them into the above variables
    cout << "What is the name of Student 1?" << endl;
    getline(cin, name1);
    cout << "How old is Student 1 in years?" << endl;
    cin >> age1;
    cout << "What is the name of Student 2?" << endl;
    getline(cin, temp);
    getline(cin, name2);
    cout << "How old is Student 2 in years?" << endl;
    cin >> age2;
    cout << "What is the name of Student 3?" << endl;
    getline(cin, temp);
    getline(cin, name3);
    cout << "How old is Student 3 in years?" << endl;
    cin >> age3;

    // Output statements that print out the variables under the column they belong in while spacing them out as shown in the example
    cout << setw(15) << left << "Name" << setw(15) << left << "Age" << setw(15) << left << "Modified" << endl;
    cout << setw(15) << left << name1 << setw(15) << left << age1 << setw(15) << left << name1.substr(2, name1.length()-3) << endl;
    cout << setw(15) << left << name2 << setw(15) << left << age2 << setw(15) << left << name2.substr(2, name2.length()-3) << endl;
    cout << setw(15) << left << name3 << setw(15) << left << age3 << setw(15) << left << name3.substr(2, name3.length()-3) << endl;
    return 0;
}

