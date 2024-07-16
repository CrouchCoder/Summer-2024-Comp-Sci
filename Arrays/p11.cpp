#include <iostream>
using namespace std;

void getArray(int a[4])
{
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> a[i];
    }
}

void printArray(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void mergeArrays(int a[4], int b[4], int c[8])
{
    for (int i = 0; i < 4; i++)
    {
        c[i] = a[i];
    }
    for (int i = 0; i < 4; i++)
    {
        c[i + 4] = b[i];
    }
}
int main()
{
    int a[4], b[4], c[8];
    getArray(a);
    getArray(b);
    printArray(a, 4);
    printArray(b, 4);
    mergeArrays(a, b, c);
    printArray(c,8);
}