#include <iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter number of rows you want: ";
    cin >> rows;
    int count = rows;

    for (int i = rows; i >= 0; i--){
        for (int j = 1; j <= i; j++){
            cout << count << ' ';
        }
        count--;
        cout << endl;
    }
}