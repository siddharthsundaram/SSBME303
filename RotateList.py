# Rotate function
def rotate(lst, k):
    # Changes list from argument into its rotated version
    lst[:] = lst[k:] + lst[:k]

# Takes user inputs for list to rotate and how much to rotate it by
lst = eval(input("What list to rotate?"))
k = eval(input("How many elements to rotate?"))

# Calls and prints rotated function on the user inputted variables
rotate(lst, k)
print("Rotated: ", lst)
