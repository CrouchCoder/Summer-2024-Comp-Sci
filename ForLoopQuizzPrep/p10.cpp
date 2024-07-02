#include <iostream>
using namespace std;

int main(){
    int sqr;
    int sum = 0;
    cout << "Print sum of square of the first 15 positive integers." << endl;
    for (int i = 1; i <= 15; i++){
    sqr = i*i;
    sum += sqr;
    }
    cout << sum <<endl;
}