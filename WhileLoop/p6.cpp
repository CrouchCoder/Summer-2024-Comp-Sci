#include <iostream>
using namespace std;

int main(){
    int num;
    long int factorial = 1;
    cout << "Enter a number you want to find the factorial for: ";
    cin >> num;
    int i = 1;
    while (i<=num){
        factorial *= i;
        i++;
    }
    cout << "The factorial of your number is: " << factorial << endl;
}