#include <iostream>
using namespace std;

int main(){
    int factorial = 1;
    int num;
    cout << "Enter a number that you want the factorial of: ";
    cin >> num;
    for (int i = num; i >= 1; i--){
    factorial *= i;
    }
    cout << factorial <<endl;
}