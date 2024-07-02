#include <iostream>
using namespace std;

int main()
{
    int num;
    bool prime = true;

    cout << "Enter a positive integer to check if it's a prime number: ";
    cin >> num;

    if (num <= 1)
    {
        cout << "Your number is not prime." << endl;
        prime = false;
    }
    else if (num <= 3)
    {
        prime = true;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            prime = false;
        }
    }
    if (prime && num != 0)
    {
        cout << "Your number is a prime number." << endl;
    }
    else if (!prime && num != 0 && num != 1)
    {
        cout << "Your number is not a prime number." << endl;
    }
}