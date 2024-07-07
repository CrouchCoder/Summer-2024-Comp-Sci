#include <iostream>
using namespace std;

int main(){
    string str;
    cout << "Enter a 16 character string (non-seperated): ";
    getline(cin, str);
    if (str.length()>16){
        cout << "Character was: " << str.length() << " characters long. Too long!" << endl;
        return 1;
    }else if (str.length()<16){
        cout << "Character was: " << str.length() << " characters long. Too short!" << endl;
        return 1;
    }
    

    for (int i = 0; i < str.length(); i++){
        cout << str[i];
        if ((i+1) % 4 ==0){
            cout << endl;
        }else{
            cout << " ";
        }
    }
}