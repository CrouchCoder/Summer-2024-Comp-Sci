#include <iostream>
using namespace std;

int main()
{
    string word;
    char letter;
    cout << "Enter a word: ";
    getline(cin, word);
    cout << "Enter a letter that you want to find in your word: ";
    cin >> letter;
    int count = 0;
    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] == letter)
        {
            count++;
        }
    }
    cout << "Character " << letter << " appeared " << count << " times." << endl;
}