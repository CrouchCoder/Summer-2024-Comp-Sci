#include <iostream>
using namespace std;

int main(){
    string letter = "X";
    int row;
    int column;
    cout << "Enter number of rows you want: ";
    cin >> row;
    cout << "Enter number of columns you want: ";
    cin >> column;
    for (int i = 1; i <= column; i++){
        for (int j = 1; j<= row; j++){
            if ((i+j) % 2 == 0){
                cout << "O";
            }else{
                cout << "X";
            }
            
        }
        cout << endl;
    }
}