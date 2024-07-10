#include <iostream>
using namespace std;

double calcArea (double x, double y){
    return x * y;
}
int main(){
    double a, b;
    cout << "Enter number 1: ";
    cin >> a;
    cout << "Enter number 2: ";
    cin >> b;
    cout << "The area is: " << calcArea(a,b) << endl;
}