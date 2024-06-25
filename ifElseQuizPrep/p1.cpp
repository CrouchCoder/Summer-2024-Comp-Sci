#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num > 0){
        cout << "Your number is postive."<<endl;
    }else if (num < 0){
        cout << "Your number is negative."<<endl;
    }else{
        cout << "Your number is 0."<<endl;
    }
}