#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string containing multiple names: ";
    getline(cin, str);

    string smallestNameSoFar = "";
    string currentName = "";

    for (int i = 0; i <= str.length(); i++)
    {
        if (i == str.length() || str[i] == ' ')
        {
            if (smallestNameSoFar == "" || currentName < smallestNameSoFar)
            {
                smallestNameSoFar = currentName;
            }
            currentName = "";
        }
        else
        {
            currentName += str[i];
        }
    }

    cout << smallestNameSoFar << endl;
}