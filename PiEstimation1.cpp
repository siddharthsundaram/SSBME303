#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Estimation of pi using numerical intergration
int main() {
    // Declaration of the variables for number of rectangles (input), x position, and pi
    int n;
    float x;
    float PI = 3.14159265;

    // Output statement that stores user input in the n variable above
    cout << "Please enter the total number of rectangles 'n' for the estimation:" << endl;
    cin >> n;

    // Declaration of the dx variable, which uses n in the calculation, and the total area variable
    float dx = 1.0/n;
    float totalArea = 0;

    // For loop to calculate area under the curve based on number of rectangles
    for (int i = 1; i <= n; i++) {
        x = (i-1) * dx;
        totalArea += sqrt(1 - pow(x, 2)) * dx;
    }

    // Declaration and assignment of estimated value of pi and error variables
    float estimatedPi = totalArea * 4;
    float error = (fabs(estimatedPi - PI) / PI) * 100;

    // Output statements that print the estimated value of pi given the inputted number of rectangles and its error when compared to the real value of pi
    cout << "The estimated value of pi is " << fixed << setprecision(10)<< estimatedPi << " with n = " << n  << "." << endl;
    cout << "The error is " << fixed << setprecision(5) << error << "%" << endl;
    return 0;
}
