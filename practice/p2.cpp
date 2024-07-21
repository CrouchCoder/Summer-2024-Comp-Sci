#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string of words: ";
    getline(cin, str);

    string current = "";
    string smallest = "";

    for (int i = 0; i <= str.length(); i++)
    {
        if (i == str.length() || str[i] == ' ')
        {
            if (!current.empty() && (smallest.empty() || current < smallest))
            {
                smallest = current;
            }
            current = "";
        }
        else
        {
            current += str[i];
        }
    }
    cout << smallest << endl;
}