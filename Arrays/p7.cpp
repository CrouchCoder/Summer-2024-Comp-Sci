#include <iostream>
using namespace std;

void getNum(int a[6])
{
    for (int i = 0; i < 6; i++)
    {
        cout << "Enter integer " << (i + 1) << " : ";
        cin >> a[i];
    }
}

void getPrint(int a[6]) {
    for (int i = 0; i < 6; i++){
        cout << a[i]<< endl;
    }
}

void getSort(int a[6]) {
    int start = 0, end = 5;
    while(start<end){
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
}

 int main()
{
    int num[6];
    getNum(num);
    getSort(num);
    getPrint(num);
}