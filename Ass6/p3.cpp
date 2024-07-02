#include <iostream>
using namespace std;

int main()
{
    int totalRep = 5;
    int num[totalRep];
    int sumOfPos = 0;
    cout << "Enter 5 numbers to calculate the sum of all the positive numbers in the list" << endl;
    for (int i = 0; i < totalRep; i++)
    {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> num[i];
        if (num[i] > 0)
        {
            sumOfPos += num[i];
        }
    }
    cout << "The sum of the positive numbers entered in the program above is: " << sumOfPos << endl;
}