#include <iostream>
using namespace std;

int main()
{
    int password = 54321;
    int number;
    for (;;)
    {
        cout << "Enter a 5 diigit number combination: ";
        cin >> number;
        if (number == password)
        {
            cout << "Correct Password!" << endl;
            break;
        }
        else
        {
            cout << "Wrong password, try again." << endl;
        }
    }
}