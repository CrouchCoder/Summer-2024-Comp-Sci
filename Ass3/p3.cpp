#include <iostream>
using namespace std;

int main()
{
    float number1;
    float number2;
    float number3;
    cout << "Enter a Number 1: ";
    cin >> number1;
    cout << "Enter a Number 2: ";
    cin >> number2;
    cout << "Enter a Number 3: ";
    cin >> number3;
    float result = (number1 + number2 + number3) / 3;
    cout << "Average: " << result << endl;
}