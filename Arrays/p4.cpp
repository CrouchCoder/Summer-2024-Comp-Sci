#include <iostream>
using namespace std;

void getNum(int a[10])
{
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter integer " << (i + 1) << " : ";
        cin >> a[i];
    }
}

void printNum(int a[10])
{
    int big = 0;
    int big2 = 0;
    for (int i = 0; i <10; i++){
        if(a[i]>big){
            big2 = big;
            big = a[i];
        }else if (a[i] > big2 && a[i] != big){
            big2 = a[i];
        }
    }
    cout << big2 << endl;
}

int main()
{
    int num[10];
    getNum(num);
    printNum(num);
}