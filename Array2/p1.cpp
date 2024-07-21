#include <iostream>
using namespace std;

void getNum(int a[5])
{
    cout << "Enter 5 integers to find their sum and average: " << endl;
    for (int i = 1; i <= 5; i++)
    {
        cout << "Enter integer " << i << " : ";
        cin >> a[i];
    }
}

double getSum(int a[5])
{
    int sum = 0;
    for (int i = 1; i <= 5; i++)
    {
        sum += a[i];
    }
    return sum;
}

double getAvg(int a[5])
{
    int sum = 0;
    int avg = 0;
    for (int i = 1; i <= 5; i++)
    {
        sum += a[i];
    }
    avg = sum / 5.0;
    return avg;
}
int main()
{
    int arr[5];
    getNum(arr);
    int sum = getSum(arr);
    int avg = getAvg(arr);
    cout << "The sum is: "<<sum << endl <<"The average is: "<< avg << endl;
}