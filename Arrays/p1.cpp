#include <iostream>
using namespace std;

void getHeights(double a[5])
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter height for next student: ";
        cin >> a[i];
    }
}

void printHeights(double a[5])
{
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << endl;
    }
}

int main()
{
    double height[5];
    getHeights(height);
    printHeights(height);
}