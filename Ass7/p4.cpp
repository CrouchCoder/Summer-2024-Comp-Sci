#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 10;
    int num[SIZE];
    cout << "Enter 10 positive integers." << endl;
    for (int i = 0; i < SIZE; ++i)
    {
        cout << "Enter integer " << (i + 1) << ": ";
        cin >> num[i];
    }
    bool ascending = true;
    bool descending = true;
    for (int i = 1; i < SIZE; ++i)
    {
        if (num[i] > num[i - 1])
        {
            descending = false;
        }
        if (num[i] < num[i - 1])
        {
            ascending = false;
        }
    }
    if (ascending)
    {
        cout << "Your list is ascending." << endl;
    }
    else if (descending)
    {
        cout << "Your list is descending." << endl;
    }
    else
    {
        cout << "Your list is shuffled" << endl;
    }
}