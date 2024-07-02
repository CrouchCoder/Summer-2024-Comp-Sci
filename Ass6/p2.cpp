#include <iostream>
using namespace std;

int main()
{
    int totalrep = 6;
    int num[totalrep];
    int sumOfAbs = 0;
    cout << "Enter 6 numbers to find the sum of each of their absolute values." << endl;
    for (int i = 0; i < totalrep; i++)
    {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> num[i];
        sumOfAbs += abs(num[i]);
    }
    cout << "The sum of each of their absolute values is: " << sumOfAbs << endl;
}