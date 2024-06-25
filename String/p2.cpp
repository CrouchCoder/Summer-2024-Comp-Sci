#include <iostream>
using namespace std;

int main(){
    string name1;
    string name2;
    cout << "Enter your first name: ";
    cin >> name1;
    cout << "Enter your last name: ";
    cin >> name2;
    string concat = "Hello " + name1 + " " + name2;
    cout << concat << endl;
}