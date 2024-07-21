#include <iostream>
using namespace std;

void getArr(int a[4][5])
{
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter integer for row " << (i + 1) << " : ";
        for (int j = 0; j < 5; j++)
        {
            cout << "Enter integer for " << (i + 1) << " x " << (j + 1) << " : ";
            cin >> a[i][j];
        }
    }
}

int sumRow(int a[4][5], int row)
{
    int sum = 0;
    for (int j = 0; j < 5; j++)
    {
        sum += a[row][j];
    }
    return sum;
}

void printSum(int a[4][5])
{
    cout << "Sum of each row: " << endl;
    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        int sum = sumRow(a, i);
        cout << "Sum of row " << (i + 1) << ": " << sum << endl;
    }
}

int main()
{
    int num[4][5];
    getArr(num);
    printSum(num);
}