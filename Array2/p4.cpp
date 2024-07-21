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

int sumCol(int a[4][5], int col)
{
    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        sum += a[i][col];
    }
    return sum;
}

void printSum(int a[4][5])
{
    cout << "Sum of each column: " << endl;
    int sum = 0;
    for (int j = 0; j < 5; j++)
    {
        int sum = sumCol(a, j);
        cout << "Sum of column " << (j + 1) << ": " << sum << endl;
    }
}

int main()
{
    int num[4][5];
    getArr(num);
    printSum(num);
}