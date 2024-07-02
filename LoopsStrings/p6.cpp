#include <iostream>
using namespace std;

int main()
{
    string names;
    string firstrank = "";
    char firstLetter;
    string current = "";

    cout << "Enter a string of names to find which name shows up first in the alphabetical order: ";
    getline(cin, names);

    for (int i = 0; i < names.length(); i++)
    {
        if (names[i - 1] == ' ' || i == 0)
        {
            if (firstrank == "" || current[0] < firstrank[0])
            {
                firstrank = current;
            }
            current = names[i];
        }
        else
        {
            current += names[i];
        }
    }

    cout << "First name: " << firstrank << endl;
}