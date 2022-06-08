import numpy as np

def movingAvg(array, size = 3):
    # Returns moving average with given array and size using numpy convolve and ones functions
    return np.convolve(array, np.ones(size), 'valid') / size

def main():
    # Opens input file in read mode
    inFile = open("303_Lab10_P1.txt", "r")

    # Creates array and size from input file
    array = np.fromstring(inFile.readline(), dtype = int, sep = " ")
    size = int(inFile.readline())

    # Saves the moving average results to a different text file
    np.savetxt("BME303_Lab10_P1_SiddharthSundaram.txt", movingAvg(array, size), "%0.1f", newline = " ")

    # Closes the file
    inFile.close()

main()
