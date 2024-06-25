#include<iostream>
using namespace std;

int main(){
    short age;
    cout << "Enter Age: ";
    cin >> age;
    if (12>age>0) {
        cout << "Child";
    } else if (19>=age>=13) {
        cout << "Teenager";
    } else if (64>=age>=20) {
        cout << "Adult";
    } else if (age>64) {
        cout << "Senior";
    }
    cout << endl;
}