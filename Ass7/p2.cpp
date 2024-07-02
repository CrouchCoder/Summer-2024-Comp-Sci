#include <iostream>
using namespace std;

int main()
{
    string str;
    int up = 0;
    int low = 0;
    int digits = 0;
    int ch = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            up++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            low++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            digits++;
        }
        else if (str[i] == ' ')
        {
            ch++;
        }
    }
    cout << "Your string has " << up << " uppercase letters." << endl;
    cout << low << " lowercase letters." << endl;
    cout << digits << " numbers between 0 and 9." << endl;
    cout << ch << " spaces in you string." << endl;
}