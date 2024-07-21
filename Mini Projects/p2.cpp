#include <iostream>
#include <fstream>
using namespace std;

int findMax(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int findMin(int arr[], int n)
{
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int SIZE = 20;
    int arr[SIZE];
    ifstream input("input_max_min.txt");
    for (int i = 0; i <= SIZE; i++)
    {
        input >> arr[i];
    }
    input.close();
    int maxElement = findMax(arr, SIZE);
    int minElement = findMin(arr, SIZE);

    cout << "Maximum element: " << maxElement << endl;
    cout << "Minimum element: " << minElement << endl;
}
