#include <iostream>
using namespace std;

int main()
{
    char ch;
    string str;
    int count = 0;
    cout << "Enter a sentence: ";
    getline(cin, str);
    cout << "Enter a character: ";
    cin >> ch;
    int i = 0;

    while (i < str.length())
    {
        char cha = tolower(str[i]);
        if (cha == ch)
        {
            count++;
        }
        i++;
    }
    cout << "The number of times your character occured was: " << count << endl;
}