#include <iostream>
using namespace std;

int main() {
    string pd = "";
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);
    bool palindrome = true;
    for(int i =0; i< str.length(); i++){
        for(int j = str.length(); i > 0; j--){
            char ch = str[i];
            if (ch == str[j]){
                pd += ch;
            }
        }
        
    }
    
}