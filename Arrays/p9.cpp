#include <iostream>
using namespace std;

void getNum(int a[6])
{
    for (int i = 0; i < 6; i++)
    {
        cout << "Enter number " << (i + 1) << " : ";
        cin >> a[i];
    }
}

void printNum(int a[6])
{
    for (int i = 0; i < 6; i++)
    {
        cout << "Number " << (i + 1) << " = " << a[i] * 2 << endl;
    }
}
int main()
{
    int num[6];
    getNum(num);
    printNum(num);
}