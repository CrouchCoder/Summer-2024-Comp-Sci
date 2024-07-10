#include <iostream>
using namespace std;

double calculateSum(double x, double y)
{
    return  x + y;
}
int main()
{
    for (int i = 1; i <= 3; i++)
    {
        double a, b;
        cout << "Enter number 1: ";
        cin >> a;
        cout << "Enter number 2: ";
        cin >> b;
        cout << "Sum is: " <<calculateSum(a, b) << endl;
    }
}