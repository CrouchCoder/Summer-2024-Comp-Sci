#include <iostream>
using namespace std;

double calculateIntrest(double principal, double rate = 0.05, int time = 1)
{
    return (principal * rate * time);
}

int main()
{
    double principal;
    double rate;
    int time;
    cout << "Enter the principal amount: ";
    cin >> principal;
    
    cout << "Optionally enter rate: ";
    cin >> rate;
    cout << "Optionally enter time: ";
    cin >> time;
    double total = calculateIntrest(principal, rate, time);
    cout << total << endl;
}