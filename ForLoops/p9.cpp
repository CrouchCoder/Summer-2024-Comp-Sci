#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Select a number to print a multiplication table for your number: ";
    cin >> num;
    for (int i = 1; i <=10; i+=1){
     cout << num << " * " << i << " = " << (num * i)<< endl;
    }
}