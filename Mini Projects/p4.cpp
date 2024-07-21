#include <iostream>
#include <fstream>
using namespace std;

void getArray(int arr[], int n, const string& filename) {
    ifstream input(filename);
    if (!input) {
        cerr << "Error opening file." << endl;
        return;
    }

    for (int i = 0; i < n; i++) {
        input >> arr[i];
    }
    input.close();
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool searchElement(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return true;
        }
    }
    return false;
}

int main() {
    const int SIZE = 20;
    int arr[SIZE];

    // Read the array from the file
    getArray(arr, SIZE, "input_search.txt");
    printArray(arr, SIZE);

    int numToFind;
    do {
        cout << "Enter the number to find in the array (or -1 to exit): ";
        cin >> numToFind;
        if (numToFind != -1) {
            if (searchElement(arr, SIZE, numToFind)) {
                cout << "Found\n";
            } else {
                cout << "Not found\n";
            }
        }
    } while (numToFind != -1);

}