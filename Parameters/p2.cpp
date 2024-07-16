#include <iostream>
using namespace std;

void swapValues (int &a, int& b){
int c = a;
a = b;
b = c;
cout << "A is now "<< a << " and B is now " << b << endl;
}
int main(){
int a, b;
cout << "Enter A: ";
cin >> a;
cout << "Enter B: ";
cin >> b;
swapValues(a, b);
}