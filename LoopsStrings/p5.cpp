#include <iostream>
using namespace std;

int main()
{
    int wordCount = 1;
    string sentence;
    
    cout << "Enter a sentence to calculate how many words are in the sentence: ";
    getline(cin, sentence);
    for (int i = 0; i < sentence.length(); i++)
    {
        if (sentence[i] = ' ' && sentence[i-1] != ' ')
        {
            wordCount++;
        }
    }
    
    cout << "Number of words: " << wordCount << endl;
}