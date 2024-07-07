#include <iostream>
using namespace std;

int main()
{
    string str;

    cout << "Enter a string to find the postition of the word that starts with 'a': ";
    getline(cin, str);

    int wordCount = 0;
    bool aFound = false;
    bool startWord = -1;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
        {
            if (str[i] == 'a')
            {
                startWord = wordCount;
                aFound = true;
                break;
            }
        }
        if (str[i] == ' ')
        {
            wordCount++;
        }
    }

    if (aFound)
    {
        cout << "The first word starting with the letter a is at index: " << startWord << endl;
    }
    else
    {
        cout << "There was no word starting with the letter 'a' found. " << endl;
    }
}
