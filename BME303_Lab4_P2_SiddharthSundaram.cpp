#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Declares file name
    ofstream file("BME303_Lab4_P2_SiddharthSundaram_MultiplicationTable.txt");
    // Outer for loop that goes from 1 to 9
    for (int i = 1; i <= 9; i++) {
        // Inner for loop that goes from 1 to the current value of the outer loop counter i
        for (int j = 1; j <= i; j++) {
            // Stores the product of the counters of the inner and outer loops into the file
            file << i*j << " ";
        }
        // Ends the line in the file
        file << endl;
    }
    return 0;
}
