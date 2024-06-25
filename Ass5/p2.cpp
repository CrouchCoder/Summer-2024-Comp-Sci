#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num > 0)
    {
        if (num % 2 == 0)
        {
            cout << "Your number is positive and even." << endl;
        }
        else
        {
            cout << "Your number is positive and odd." << endl;
        }
    }
    else if (num < 0)
    {
        if (num % 2 == 0)
        {
            cout << "Your number is negative and even." << endl;
        }
        else
        {
            cout << "Your number is negative and odd." << endl;
        }
    }
    else
    {
        cout << "Your number is zero." << endl;
    }
}