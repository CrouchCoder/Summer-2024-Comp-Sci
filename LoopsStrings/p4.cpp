#include <iostream>
using namespace std;

int main()
{
    string palindrome;
    string reversed;
    
    cout << "Enter a word you want to check if it's a palindrome: ";
    getline(cin, palindrome);


    for (int i = palindrome.length() - 1; i >= 0; i--)
    {
        reversed += palindrome[i];
    }

    if (reversed == palindrome)
    {
        cout << palindrome << " - is a palindrome." << endl;
    }
    else
    {
        cout << palindrome << " - isn't a palindrome." << endl;
    }
}