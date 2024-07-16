#include <iostream>
using namespace std;

int calculateSum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; ++i)
    {
        sum += arr[i];
    }
    return sum;
}

double calculateAverage(int arr[], int size)
{
    if (size == 0){
        return 0.0;
    }
    int sum = calculateSum(arr, size);
    return static_cast<double>(sum) / size;
}

int main()
{
    const int SIZE = 5;
    int arr[SIZE];

    cout << "Enter 5 integers:" << endl;
    for (int i = 0; i < SIZE; ++i)
    {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> arr[i];
    }

    int sum = calculateSum(arr, SIZE);
    double average = calculateAverage(arr, SIZE);

    cout << "Sum of the numbers: " << sum << endl;
    cout << "Average of the numbers: " << average << endl;

}