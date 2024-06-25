#include<iostream>
using namespace std;

int main(){
    double height;
    double base;
    
    cout << "Enter Base: ";
    cin >> base;
    cout << "Enter Height: ";
    cin >> height;

    double area = (base * height) / 2.0;

    
    cout << "The area of the triangle with base " << base << " and height " << height << " is: " << area << endl;
}