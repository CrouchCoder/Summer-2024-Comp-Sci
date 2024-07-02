#include <iostream>
using namespace std;

int main()
{
    string word;
    char letter;
    char replace;
    cout << "Enter a word: ";
    getline(cin, word);
    cout << "Enter a letter that you want to replace in your word: ";
    cin >> letter;
    cout << "Enter a letter that replaces the previous letter: ";
    cin >> replace;
    int count = 0;
    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] == letter)
        {
            letter = replace;
        } 
    }
    cout << word << endl;
}