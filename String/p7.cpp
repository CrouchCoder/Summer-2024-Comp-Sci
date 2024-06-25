#include <iostream>
using namespace std;

int main(){
    string fullName1;
    string fullName2;
    cout << "Enter a full name: " << endl;
    cin >> fullName1;
    getline(cin,fullName2);
    cout << "First name: " << fullName1 << endl; 
    cout << "Last Name: " << fullName2 << endl;
}