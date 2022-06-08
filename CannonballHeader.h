// HEADER FOR CANNONBALL
#ifndef LAB6_BME303_LAB6_P4_SIDDHARTHSUNDARAM_CANNONBALL_H
#define LAB6_BME303_LAB6_P4_SIDDHARTHSUNDARAM_CANNONBALL_H

using namespace std;

class Cannonball {
public:
    // Call to constructor and other functions
    Cannonball();
    void move(double sec);
    void shoot();

private:
    // Private variables
    double flightTime, xpos, ypos, xvelocity, yvelocity;
};
#endif //LAB6_BME303_LAB6_P4_SIDDHARTHSUNDARAM_CANNONBALL_H

