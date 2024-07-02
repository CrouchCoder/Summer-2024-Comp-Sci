#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);
    int i = 0;
    while (i < str.length())
    {
        if (str[i] >= 'a' && str[i] <= 'z' && (str[i - 1] == ' ' || i == 0))
        {
            str[i] = str[i] - 'a' + 'A';
        }
        i++;
    }
    cout << "The modified sentence is: " << str;
}