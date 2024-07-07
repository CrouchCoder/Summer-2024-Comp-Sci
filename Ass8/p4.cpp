#include <iostream>
using namespace std;

int main()
{
    string str;
    string lastWord = "";

    cout << "Enter a string of words to find out the last word: ";
    getline(cin, str);

    
    
    for (int i = str.length(); i >= 0; i--)
    {
        if (str[i] != ' ')
        {
            lastWord = str[i] + lastWord;
        }
        else if (str[i] == ' ')
        {
            break;
        }
    }
    cout << lastWord << endl;
}