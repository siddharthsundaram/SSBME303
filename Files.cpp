#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    string word, file;
    int count = 0;

    // Declare an input file stream object called f
    ifstream f;

    // Asks for user to input a file name and stores input into string file
    cout << "Please input path to \"sum.asm\":" << endl;
    cin >> file;

    // Open the text file and associate it with f
    f.open(file);

    // Outputs that the file is open to read if it has been opened by the previous line
    if(f.is_open()) {
        cout << "File is open to read" << endl;

        // While the file has more words to read, read the next word and if it is "add", add one to count
        while (f >> word) {
            if (word == "add") {
                count ++;
            }
        }

        // Outputs the number of times "add" exists in the file
        cout << "number of times add is called is " << count << endl;
    }

    // If the file pathway is incorrect, prints this statement
    else {
        cout << "failed to open file !" << endl;
    }


    return 0;
}

