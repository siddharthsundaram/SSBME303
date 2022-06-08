// CANNONBALL CPP FILE
#include <iostream>
#include <iomanip>
#include <cmath>
#include "BME303_Lab6_P4_SiddharthSundaram_Cannonball.h"

using namespace std;

// Default constructor
Cannonball::Cannonball() {
    this -> flightTime = 0.1;
    this -> xpos = 0;
    this -> ypos = 0;
    this -> xvelocity = 0;
    this -> yvelocity = 0;
}

// Move function that uses kinematic equations to update the position of the ball
void Cannonball::move(double sec) {
    double gravity = -9.81;
    this -> ypos = (yvelocity*sec) + (0.5*gravity*pow(sec, 2));
    this -> xpos = (xvelocity*sec);
    //this -> yvelocity = yvelocity + (gravity*sec);
}

// Shoot function that continuously calls move until the ball hits the ground
void Cannonball::shoot() {
    double angle, initVel;
    int count = 1;

    // Takes user inputs for starting angle and initial velocity
    cout << "Please enter the starting angle:" << endl;
    cin >> angle;
    cout << "Please enter the initial velocity of the cannonball:" << endl;
    cin >> initVel;

    // Changes angle to radians and sets x and y velocity based on angle
    angle = (angle * M_PI) / 180;
    this -> xvelocity = initVel*cos(angle);
    this -> yvelocity = initVel*sin(angle);

    // Calls move function while the ball is still in the air and prints the position every second
    while (ypos >= 0) {
        move(flightTime);
        if (count % 10 == 0) {
            cout << "The x and y positions are: " << fixed << setprecision(2) << setw(8) << xpos << "m and ";
            cout << fixed << setprecision(2) << setw(8) << ypos << "m, respectively, after ";
            cout << fixed << setprecision(1) << setw(4) << flightTime << "s" << endl;
        }

        count++;
        flightTime += 0.1;
    }

    // Final print of position when ball hits the ground, and message that indicates the end of the simulation
    flightTime -= 0.1;
    cout << "The x and y positions are: " << fixed << setprecision(2) << setw(8) << xpos << "m and ";
    cout << fixed << setprecision(2) << setw(8) << ypos << "m, respectively, after ";
    cout << fixed << setprecision(1) << setw(4) << flightTime << "s" << endl;
    cout << "BME303_Lab6_P4_Cannonball impact! Ending Simulation!" << endl;
}
