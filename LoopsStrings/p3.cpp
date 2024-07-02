#include <iostream>
using namespace std;

int main()
{
    string word;
    string reversed = "";
    cout << "Enter a word you want to reverse: ";
    cin >> word;
    for (int i = word.length() - 1; i >= 0; i--)
    {
        reversed += word[i];
    }
    cout << "The reversed version of " << word << " is: " << reversed << endl;
}