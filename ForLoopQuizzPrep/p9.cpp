#include <iostream>
using namespace std;

int main(){
    int num;
    int factor;
    cout << "Enter a number that you want to make a multiplication table for: ";
    cin >> num;
    for (int i = 1; i <= 10; i++){
    factor = i*num;
    cout << num << "x" << i << " = "<< factor <<endl;
    }
}