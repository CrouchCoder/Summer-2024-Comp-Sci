#include <iostream>
using namespace std;
 int main(){
    string word1;
    string word2;
    cout << "Enter 2 words of the same length to check if they're anagrams." << endl;
    cout << "Enter word 1: ";
    cin >> word1;
    cout << "Enter word 2: ";
    cin >> word2;
    bool anagram = true;

    for (int i = 0; i < word1.length(); i++){
        bool same = false;
        char ch = word1[i];
        for (int j = 0; j < word2.length(); j++){
            if (ch == word2[j]){
                same = true;
                break;
            }
        }
        if(!same){
            anagram = false;
            break;
        }
    }
    if (anagram){
        cout << "The two words are anagrams!" << endl;
    }else {
        cout << "The two words are not anagrams." << endl;
    }
 }