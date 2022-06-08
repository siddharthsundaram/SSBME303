def minOps(A, B):
    # Length of each string stored into variables
    m = len(A)
    n = len(B)

    # Returns -1 if lengths of strings are not the same
    if n != m:
        return -1

    # Creates ascii character list and assigns values based on character similarity in strings A and B
    count = [0] * 256
    for i in range(n):
        count[ord(B[i])] += 1
    for i in range(n):
        count[ord(A[i])] -= 1
    for i in range(256):

        # Returns -1 of strings don't have all characters in common
        if count[i]:
            return -1

    # Counts how many character switch operations are required to turn one string into the other
    res = 0
    i = j = n-1
    while i >= 0:
        while i >= 0 and A[i] != B[j]:
            i -= 1
            res += 1
        if i >= 0:
            i -= 1
            j -= 1
        return res

def main():
    A = str(input("Enter string A: "))
    B = str(input("Enter string B: "))
    print("Minimum number of operations is: ", minOps(A, B))

    return 0

main()
