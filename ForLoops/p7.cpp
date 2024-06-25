#include <iostream>
using namespace std;

int main()
{
    int sum=0;
    for (int i = 0; i <=100; i+=3){
     if (i%5 == 0){
     sum += i;
     }
    }
    cout << sum << endl;
}