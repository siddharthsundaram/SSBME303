# Function that takes hyphen-separated string and alphabetizes it
def alpha():

    # Printed statement that prompts user input and stores into inp variable
    print("Enter a hyphen separated string of words:")
    inp = str(input())

    # Splits string into words and stores into list. List is then sorted alphabetically
    temp = inp.split("-")
    temp.sort()

    # Goes through list and adds it to string with "-" between each word, last hyphen is removed
    string = ""
    for i in temp:
        string += i
        string += "-"

    # Final alphabetically ordered string is made and returned
    final = "Sorted: " + string[:len(string) - 1]
    return final

# Call to above function
print(alpha())
