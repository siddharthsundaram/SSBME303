import time
import random

# Function that will estimate pi with the monte carlo simulation
def monteCarlo():

    # Initialization of all the variables
    num = 0
    nummax = 10000
    x, y, est_pi, ratio = 0.0, 0.0, 0.0, 0.0
    hit = 0.0

    # Random seed
    random.seed(time.time)

    # While loop that runs nummax times; sets x and y equal to a random float value between 0 and 1 and prints
    # Additionally, if x^2 + y^2 is less than 1, it will add 1 to the hit variable
    while num < nummax:
        y = random.random()
        x = random.random()
        print(x, ",", y)
        num += 1
        if (x ** 2) + (y ** 2) <= 1: hit += 1

    # Sets variable ratio equal to number of hits out of total points and sets the pi estimation equal to 4 * ratio
    ratio = hit / nummax
    est_pi = ratio * 4

    # Prints the estimated pi value from the simulation, rounded to 6 digits (after the decimal point)
    print("The estimated pi value is ", "{:.6f}".format(est_pi))

    return 0

# Call to above function
monteCarlo()