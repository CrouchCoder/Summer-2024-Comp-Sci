#include <iostream>
using namespace std;

int main()
{
    string str;
    string revstr;
    cout << "Enter words to reverse them, program will run until 'stop'." << endl;

   
    do {
        cout << "Enter word: ";
        cin >> str;
        revstr = "";
        for (int i = 0; i < str.length(); i++){
            revstr = str[i] + revstr;
        }
        cout << "Reverse of your word is: " << revstr << ". " <<endl;
    } 
    while(str != "stop");
}
    
