#include <iostream>
using namespace std;

void getArr(int a[4][4])
{
    for (int i = 1; i <= 4; i++)
    {
        cout << "Enter integer for row " << i << " : ";
        for (int j = 1; j <= 4; j++)
        {
            cout << "Enter integer for " << i << " x " << j <<" : ";
            cin >> a[i][j];
        }
    }
}

void printArr(int a[4][4]){
    cout << "Matrix: " << endl;
    for (int i = 1; i<=4; i++){
        for(int j =1; j <= i; j++){
            cout << a[i][j] << " ";
        }
        cout <<endl;
    }
}

void printDag(int a[4][4]){
    cout << "Matrix: " << endl;
    for (int i = 1; i<=4; i++){
            cout << a[i][i] << " ";
    }
    cout <<endl;
}

int main()
{
    int num[4][4];
    getArr(num);
    printArr(num);
    printDag(num);
}