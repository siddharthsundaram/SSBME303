#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

vector<int> makeMatrix(int rows, int cols) {

    // Declaration of matrix
    vector<int> matrix(rows*cols);

    // Prompts the user to input the matrix's values at each index and stores input into the proper index
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Please specify the element of " << i << " row " << j << " col:" << endl;
            cin >> matrix.at(cols*i + j);
        }
    }

    // Returns the matrix
    return matrix;
}

void printMatrix(vector<int> matrix, int rows, int cols) {

    // Goes through each index of the matrix and prints the value
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << setw(7) << matrix.at(cols*i + j);
        }
        cout << endl;
    }
}

vector<int> matrixMultiplication(vector<int> matrix1, vector<int> matrix2, int rows1, int cols1, int rows2, int cols2) {

    // Declaration of new matrix
    vector<int> matrix3(rows1*cols2);

    // Returns error message and blank matrix if rows of matrix 1 do not equal columns of matrix 2
    if (cols1 != rows2) {
        cout << "Matrix multiplication not possible." << endl;
        return matrix3;
    }

    // Performs matrix multiplication and stores result into the proper index of the new matrix
    else {
        for (int i = 0; i < rows1; i++) {
            for (int j = 0; j < cols2; j++) {
                int total = 0;
                for (int k = 0; k < rows2; k++) {
                    total += matrix1.at(cols1*i + k) * matrix2.at(cols2*k + j);
                }
                matrix3.at(cols2*i + j) = total;
            }
        }

        // Returns the resulting matrix after multiplication is finished
        return matrix3;3
    }
}

int main() {

    // Declare variables for rows, columns, and matrices
    int rows1, cols1, rows2, cols2;
    vector<int> one, two, three;

    // Make first matrix and assign values
    cout << "Please specify the total rows of your first matrix:" << endl;
    cin >> rows1;
    cout << "Please specify the total columns of your first matrix:" << endl;
    cin >> cols1;
    one = makeMatrix(rows1, cols1);

    // Make second matrix and assign values
    cout << "Please specify the total rows of your second matrix:" << endl;
    cin >> rows2;
    cout << "Please specify the total columns of your second matrix:" << endl;
    cin >> cols2;
    two = makeMatrix(rows2, cols2);

    // Calls matrix multiplication with the 2 created matrices
    three = matrixMultiplication(one, two, rows1, cols1, rows2, cols2);

    // Outputs matrix 1, matrix 2, and the matrix resulting from multiplication
    cout << "The input matrix A is:" << endl;
    printMatrix(one, rows1, cols1);

    cout << "The input matrix B is:" << endl;
    printMatrix(two, rows2, cols2);

    cout << "The final matrix is:" << endl;
    printMatrix(three, rows1, cols2);



    return 0;
}

