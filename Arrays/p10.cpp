#include <iostream>
using namespace std;

void getArray (int a[8]){
    for (int i =0; i<8; i++){
        cout << "Enter number " << (i+1) << " : ";
        cin >> a[i];
    }
}

void getCount (int a[8]){
    int find;
    int count = 0;
    cout << "Enter a number to find the number of times it appears in the array: ";
    cin >> find;
    for (int i = 0; i<8; i++){
        if (a[i] == find){
            count++;
        }
    }
    cout << "Your number appeared: " << count << " times." << endl;
}
int main(){
    int array [8];
    getArray (array);
    getCount(array);
}