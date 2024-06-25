#include <iostream>
using namespace std;

int main()
{
    int total = 0;
    int num = 0;
    for (;;)
    {
        cout << "Enter a number: ";
        cin >> num;
        if (num != 0)
        {
            total += num;
        }
        else if (num == 0)
        {
            break;
        }
    }
    cout << "Your total is: " << total << endl;
}