#include <iostream>
using namespace std;

int main()
{
    int SIZE = 5;
    int num[SIZE];
    cout << "Enter 5 positive integers." << endl;
    for (int i = 0; i < SIZE; ++i)
    {
        cout << "Enter integer " << (i + 1) << ": ";
        cin >> num[i];

        if (num[i] <= 0)
        {
            cout << "Please enter a positive number for number " << (i + 1) << ": ";
            cin >> num[i];
        }
    }
    bool ascending = true;
    for (int i = 1; i < SIZE; ++i)
    {
        if (num[i] < num[i - 1])
        {
            ascending = false;
            break;
        }
    }
    if (ascending == true)
    {
        cout << "Your list is ascending." << endl;
    }
    else
    {
        cout << "Your list isn't ascending." << endl;
    }
}