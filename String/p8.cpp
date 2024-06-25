#include <iostream>
using namespace std;

int main()
{
    string word;
    cout << "Enter a word: ";
    getline(cin, word);
    word[0] = 's';
    int length = word.length();
    word[word.length() - 1] = 's';
    int middle = length / 2;
    if (length % 2 == 0)
    {
        word[middle - 1] = 's';
        word[middle] = 's';
    }
    else
    {
        word[word.length() / 2] = 's';
    }
    cout << word << endl;
}