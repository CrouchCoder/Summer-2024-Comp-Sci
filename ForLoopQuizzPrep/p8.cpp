#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number that you want to calculate all even numbers between one and your number: ";
    cin >> num;
    for (int i = 2; i <= num; i+=2){
    cout << i << ", ";
    }
}