#include <iostream>
using namespace std;

void getArray(int a[10])
{
    for (int i = 0; i < 10; i++)
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

void copyArray(int a[10], int b[5], int startPos, int count)
{
    for (int i = 0; i < count; i++)
    {
        b[i] = a[startPos + 1];
    }
}
int main()
{
    int a[10], b[5];
    getArray(a);
    printArray(a, 10);
    copyArray(a, b, 2, 5);
    printArray(b, 5);
}