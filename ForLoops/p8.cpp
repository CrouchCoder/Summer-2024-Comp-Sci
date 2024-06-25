#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Select a number to print all even numbers from 1 to your number: ";
    cin >> num;
    for (int i = 1; i <=num; i+=1){
     if (i%2 == 0){
     cout << i << endl;
     }
    }
}