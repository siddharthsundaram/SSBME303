import numpy as np
import imageio
import matplotlib.pyplot as plt

# Produces image with mean filter
def meanFilter(array, size = (3, 3)):
    # Creates array with input array and size
    dimension = [i - j + 1 for i, j in zip(array.shape, size)]

    # Creates array filled with 0s
    new = np.zeros(dimension)

    # Applies mean filter to every part of image within window size and saves to new array
    for i in range(dimension[0]):
        for j in range(dimension[1]):
            new[i, j] = np.mean(array[i:i + size[0], j:j + size[1]])

    return new


# Produces image with median filter
def medianFilter(array, size=(3, 3)):
    # Creates array with input array and size
    dimension = [i - j + 1 for i, j in zip(array.shape, size)]

    # Creates array filled with 0s
    new = np.zeros(dimension)

    # Applies median filter to every part of image within window size and saves to new array
    for i in range(dimension[0]):
        for j in range(dimension[1]):
            new[i, j] = np.median(array[i:i + size[0], j:j + size[1]])

    return new

def main():
    # Reads image from file
    image = imageio.imread("303_Lab10_P2.png")
    mean = meanFilter(image)
    median = medianFilter(image)

    # Saves mean and median plots to new png files
    plt.imsave("BME303_Lab10_P2_Mean_SiddharthSundaram.png", mean, cmap = plt.cm.gray)
    plt.imsave("BME303_Lab10_P2_Median_SiddharthSundaram.png", median, cmap = plt.cm.gray)

if __name__ == "__main__":
    main()
