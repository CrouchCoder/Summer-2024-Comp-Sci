#include <iostream>
using namespace std;

int main(){
    string str;
    cout << "Enter a string that you want to convert to upper-case: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++){
        if (str[i] >= 'a' && str[i] <= 'z'){
            str[i] -= 32;
        }
        cout << str[i];
    }
    cout << endl;
}