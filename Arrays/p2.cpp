#include <iostream>
using namespace std;

void getNum(int a[7])
{
    for (int i = 0; i < 7; i++)
    {
        cout << "Enter integer " << (i + 1) << " : ";
        cin >> a[i];
    }
}

void printNum(int a[7])
{
    int sum1 = 0;
    int sum2 = 0;
    cout << "Summation for even positions: ";
    for (int i = 0; i < 7; i += 2)
    {
        sum1 += a[i];
        cout << a[i];
        if (i < 6)
        {
            cout << " + ";
        }
    }
    cout << " = " << sum1 << endl;

    cout << "Summation for odd positions: ";
    for (int i = 1; i < 7; i += 2)
    {
        sum2 += a[i];
        cout << a[i];
        if (i < 5)
        {
            cout << " + ";
        }
    }
    cout << " = " << sum2 << endl;
}

int main()
{
    int num[7];
    getNum(num);
    printNum(num);
}