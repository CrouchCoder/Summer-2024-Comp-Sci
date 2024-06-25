#include <iostream>
using namespace std;

int main(){
    string x;
    cout << "What is your word?: ";
    cin >> x;
    int y;
    y = x.length();
    cout << "Your word is " << y << " letters long." << endl;
}