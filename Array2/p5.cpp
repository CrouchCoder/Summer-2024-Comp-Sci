#include <iostream>
using namespace std;

void getArr(int a[3][4])
{
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter integer for row " << (i + 1) << " : ";
        for (int j = 0; j < 4; j++)
        {
            cout << "Enter integer for " << (i + 1) << " x " << (j + 1) << " : ";
            cin >> a[i][j];
        }
    }
}

int sumRow(int a[3][4], int row)
{
    int sum = 0;
    for (int j = 0; j < 4; j++)
    {
        sum += a[row][j];
    }
    return sum;
}

int findHigh(int a[3][4])
{
    int maxRow = 0;
    int maxSum = sumRow(a, 0);

    for (int i = 1; i < 3; i++)
    {
        int currentSum = sumRow(a, i);
        if (currentSum > maxSum)
        {
            maxSum = currentSum;
            maxRow = i;
        }
    }
    return maxRow;
}
void printSum(int a[3][4], int row)
{
    cout << "Row with highest sum: " << endl;
    int sum = 0;
    for (int j = 0; j < 4; j++)
    {
        cout << a[row][j] << " ";
    }
    cout << endl;
}

int main()
{
    int num[3][4];
    getArr(num);
    int rowHigh = findHigh(num);
    printSum(num , rowHigh);
    
}