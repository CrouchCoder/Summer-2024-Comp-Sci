#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter two words to replace the second word with '***': ";
    getline(cin, str);
    bool nextword = false;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ' || str[i] == '*')
        {
            nextword = true;
        }
        if (nextword && str[i] != ' ')
        {
            str[i] = '*';
        }
    }
    cout << str << endl;

    // Solution 2
    for (int j = 0; j < str.length(); j++)
    {
        if (str[j - 1] == ' ' || str[j - 1] == '*')
        {
            str[j] = '*';
            cout << str[j];
        }
        else
        {
            cout << str[j];
        }
    }
    cout << endl;
}