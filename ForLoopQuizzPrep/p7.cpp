#include <iostream>
using namespace std;

int main(){
    int sum;
    for (int i = 15; i <= 100; i+=15){
    sum += i;
    }
    cout << sum << endl;
}