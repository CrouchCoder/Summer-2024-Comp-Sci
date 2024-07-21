#include <iostream>
#include <fstream>
using namespace std;

void mergeArrays(int arr1[], int arr2[], int merged[], int n) {
    int i = 0, j = 0, k = 0;

    while (i < n && j < n) {
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    while (i < n) {
        merged[k++] = arr1[i++];
    }

    while (j < n) {
        merged[k++] = arr2[j++];
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    const int SIZE = 10;
    int arr1[SIZE], arr2[SIZE], merged[SIZE * 2];

    ifstream input("input_merge.txt");
    if (!input) {
        cerr << "Error opening file." << endl;
        return 1;
    }

    for (int i = 0; i < SIZE; i++) {
        input >> arr1[i];
    }

    for (int i = 0; i < SIZE; i++) {
        input >> arr2[i];
    }
    
    input.close();

    mergeArrays(arr1, arr2, merged, SIZE);

    cout << "Merged array: ";
    printArray(merged, SIZE * 2);

}