#include <iostream>
using namespace std;

int main(){
    string word;
    cout << "Enter a word: ";
    cin >> word;
    word[0] = 's';
    word[word.length() - 1] = 's';
    cout << word << endl;
}