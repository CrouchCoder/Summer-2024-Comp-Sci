#include <iostream>
using namespace std;

void getNum(int a[10])
{
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter number " << (i + 1) << " : ";
        cin >> a[i];
    }
}

void findNum(int a[10])
{
    int find;
    bool found = false;
    cout << "Enter a number you want to find: ";
    cin >> find;

    for (int i = 0; i < 10; i++)
    {
        if (a[i] == find)
        {
            found = true;
            break;
        }
    }
    if (found)
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }
}

int main()
{
    int num[10];
    getNum(num);
    findNum(num);
}