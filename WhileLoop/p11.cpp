#include <iostream>
using namespace std;

int main()
{
    string digits;
    string result;

    cout << "Enter a string of digits: ";
    cin >> digits;

    for (int i = 0; i < digits.length(); i++)
    {
        bool smaller = true;
        for (int j = i + 1; j < digits.length(); j++)
        {
            if (digits[i] >= result[j])
            {
                smaller = false;
                break;
            }
        }
        if (smaller)
            {
                result += digits[i];
            }
    }
    cout << result;
}