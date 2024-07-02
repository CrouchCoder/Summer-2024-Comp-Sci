#include <iostream>
using namespace std;

int main()
{
    string str;
    string revword = "";
    string revStr = "";

    cout << "Enter 2 words to reverse their letters: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ')
        {
            revword = str[i] + revword;
        }
        else
        {
            cout << revword << " ";
            revStr = revStr + " " + revword;
            revword = "";
        }
    }
    revStr = revStr + " " + revword;
    cout << revword << endl;
}