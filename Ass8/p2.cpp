#include <iostream>
using namespace std;

int main()
{
    string str;
    string mod = "";

    cout << "Enter a string that you want abbreviated: ";
    getline(cin, str);

    bool firstLetter = true;
    for (int i = 0; i < str.length(); i++)
    {
        if (firstLetter && str[i] != ' ')
        {
            mod += str[i];
            firstLetter = false;
        }
        else if (str[i] == ' ')
        {
            firstLetter = true;
        }
    }
    cout << "Abrreviation is: " << mod << endl;
}