#include <iostream>
using namespace std;

void getMatrix(int matrix[2][3], const string& name) {
    cout << "Enter elements for matrix " << name << " (2x3): " << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Element [" << (i + 1) << "][" << (j + 1) << "]: ";
            cin >> matrix[i][j];
        }
    }
}

void addMatrices(int mat1[2][3], int mat2[2][3], int result[2][3]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void printMatrix(int matrix[2][3], const string& name) {
    cout << "Matrix " << name << ":" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix1[2][3], matrix2[2][3], result[2][3];

    getMatrix(matrix1, "A");
    getMatrix(matrix2, "B");

    addMatrices(matrix1, matrix2, result);

    printMatrix(matrix1, "A");
    printMatrix(matrix2, "B");
    printMatrix(result, "Result (A + B)");

}