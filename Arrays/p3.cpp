#include <iostream>
using namespace std;

void getNum(int a[10])
{
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter integer " << (i + 1) << " : ";
        cin >> a[i];
    }
}

void printNum(int a[10])
{
    for (int i = 0; i < 10; i += 2)
    {
        if (i + 1 < 10 && a[i] > a[i + 1])
        {
            int nxt = a[i];
            a[i] = a[i + 1];
            a[i + 1] = nxt;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout << a[i];
        if (i != 9)
        {
            cout << ", ";
        }
    }
    cout << endl;
}

int main()
{
    int num[10];
    getNum(num);
    printNum(num);
}