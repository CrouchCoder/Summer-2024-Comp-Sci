#include <iostream>
#include <fstream>
using namespace std;

void reverseArr(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        swap(arr[i], arr[n - 1 - i]);
    }
}
void printArr(int arr[], int n)
{
     for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    const int SIZE = 10;
    int arr[SIZE];
    ifstream input("input_reversed.txt");
    for (int i = 0; i < SIZE; i++)
    {
        input >> arr[i];
    }
    input.close();

    reverseArr(arr, SIZE);

    cout << "Reversed array: ";
    printArr(arr, SIZE);
}
