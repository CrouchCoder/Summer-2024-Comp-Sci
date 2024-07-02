#include <iostream>
using namespace std;

int main(){
    int term = 1;
    int ratio = 2;
    int i = 0;
    int seqVal = term;
    while (i < 30) {
    seqVal = seqVal * ratio;
    cout << seqVal<< endl;
    i++;
    }
}