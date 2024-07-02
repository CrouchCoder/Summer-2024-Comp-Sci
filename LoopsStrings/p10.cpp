#include <iostream>
using namespace std;

int main()
{
    string str;
    string word = "";
    string lngword = "";
    string current = "";
    cout << "Enter a sentence to find the longest word: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ' || i == str.length() - 1)
        {
            if (i == str.length() - 1)
            {
                current += str[i];
            }
            else if (current.length() > lngword.length())
            {
                lngword = current;
            }
            current = "";
        }
        else
        {
            current += str[i];
        }
    }

    cout << lngword << ", with length " << lngword.length() << endl;
}
