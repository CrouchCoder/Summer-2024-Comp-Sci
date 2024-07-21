#include <iostream>
using namespace std;

// Function to input a 2x3 matrix
void getMatrix2x3(int matrix[2][3], const string& name) {
    cout << "Enter elements for matrix " << name << " (2x3): " << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Element [" << (i + 1) << "][" << (j + 1) << "]: ";
            cin >> matrix[i][j];
        }
    }
}

// Function to input a 3x4 matrix
void getMatrix3x4(int matrix[3][4], const string& name) {
    cout << "Enter elements for matrix " << name << " (3x4): " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Element [" << (i + 1) << "][" << (j + 1) << "]: ";
            cin >> matrix[i][j];
        }
    }
}

// Function to multiply two matrices
void multiplyMatrices(int mat1[2][3], int mat2[3][4], int result[2][4]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            result[i][j] = 0; // Initialize result element
            for (int k = 0; k < 3; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

// Function to print a 2x3 matrix
void printMatrix2x3(int matrix[2][3], const string& name) {
    cout << "Matrix " << name << ":" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to print a 3x4 matrix
void printMatrix3x4(int matrix[3][4], const string& name) {
    cout << "Matrix " << name << ":" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to print a 2x4 result matrix
void printMatrix2x4(int matrix[2][4], const string& name) {
    cout << "Matrix " << name << ":" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix1[2][3], matrix2[3][4], result[2][4];

    // Input matrices
    getMatrix2x3(matrix1, "A");
    getMatrix3x4(matrix2, "B");

    // Multiply matrices
    multiplyMatrices(matrix1, matrix2, result);

    // Print results
    printMatrix2x3(matrix1, "A");
    printMatrix3x4(matrix2, "B");
    printMatrix2x4(result, "Result (A * B)");

    return 0;
}