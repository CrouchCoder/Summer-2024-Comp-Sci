#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    for (;;)
    {
        int integer;
        cout << "Enter integers: " << endl;
        cin >> integer;
        if (integer < 0)
        {
            cout << "You have entered a negative number." << endl;
            break;
        }
        else if (integer > 0)
        {
            count++;
        }
        }
    cout << "You entered " << count << " positive numbers before entering a negative one." << endl;
}