#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Estimation of pi using the Monte Carlo Simulation
int main() {
    // Declaration of input variable, pi, count variable, and random seed
    int n;
    float PI = 3.14159265;
    int count = 0;
    srand(time(0));

    // Output statement that stores input from user into the 'n' variable above
    cout << "Please enter the total number of random points 'n' in the simulation:" << endl;
    cin >> n;

    // For loop that runs for n iterations and generates a random point where the x and y coordinates are between 0 and 1
    // Additionally, the loop checks if the point is within a circle of radius 1 and adds to count if it is
    for (int i = 0; i < n; i++) {
        float x = float(rand()) / float(RAND_MAX);
        float y = float(rand()) / float(RAND_MAX);
        if (pow(x, 2) + pow(y, 2) <= 1) {
            count ++;
        }
    }

    // Declaration and assignment of estimated pi, error, and ellipse area variables
    // Estimated pi is calculated by dividing the number of points in the circle by the total number of points
    // Error percentage is calculated by subtracting the expected from the observed and dividing the difference by the expected
    // Ellipse area is calculated by multiplying pi by the semi major axis and the minor axis
    float estimatedPi = (float(count) / float(n)) * 4;
    float error = ((estimatedPi - PI) / PI) * 100;
    float ellipseArea = estimatedPi * 10 * 7;

    // Output statements that print the above calculations in the desired form
    cout << "The estimated pi value is " << fixed << setprecision(10) << estimatedPi << " with n = " << n << "." << endl;
    cout << "The error is " << fixed << setprecision(5) << error << "%" << endl;
    cout << "The estimated ellipse area is: " << ellipseArea << endl;

    return 0;
}

