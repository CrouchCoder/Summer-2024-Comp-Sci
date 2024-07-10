#include <iostream>
using namespace std;

void getNum(int a[9])
{
    for (int i = 0; i < 9; i++)
    {
        cout << "Enter integer " << (i + 1) << " : ";
        cin >> a[i];
    }
}
void printNum(int a[9])
{
    int big = a[0];
    int sum = 0;
    for (int i = 0; i < 9; i++)
    {
        if (a[i] > big)
        {
            big = a[i];
        }
        sum += a[i];
        
    }
    cout << sum - big << endl;
}

int main()
{
    int num[9];
    getNum(num);
    printNum(num);
}