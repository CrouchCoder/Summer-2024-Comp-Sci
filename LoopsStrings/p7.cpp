#include <iostream>
using namespace std;

int main()
{
    string str;
    string nxtWord = "";
    string revStr = "";

    cout << "Enter a string of words to rearrange in backwards order: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ')
        {
            nxtWord += str[i];
        }
        else
        {
            revStr = nxtWord + " " + revStr;
            nxtWord = "";
        }
    }
    revStr = nxtWord + " " + revStr;
    cout << revStr << endl;
}