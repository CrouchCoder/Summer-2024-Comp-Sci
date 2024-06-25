#include <iostream>
using namespace std;

int main(){
    double number;
    double highest;
    cout << "Enter 5 Positive Numbers: ";
    cin >> number;
    for(int i = 1; i<=4; ++i){
        cout << "Enter number " << (i + 1) << ": ";
        cin >> number;
        if (number > highest){
            highest = number;
        }
    }
    cout << "The highest number is: " << highest << endl;
}