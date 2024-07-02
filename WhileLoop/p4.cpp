#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int i = 1;
    while (i <= 1000)
    {
        sum += i;
        i += 2;
    }
    cout << "The sum of odd numbers 1 to 1000 is: " << sum << endl;
}