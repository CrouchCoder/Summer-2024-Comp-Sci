#include <iostream>
using namespace std;

int main(){
    string str;
    string mod = "";
    cout << "Enter a sentence that you want the spaces removed from it: ";
    getline(cin, str);
    int i = 0;
    while(i < str.length()){
        if (str[i] != ' '){
            mod += str[i];
        }
    i++;
    }
    cout << mod << endl;
}