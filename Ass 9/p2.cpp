#include <iostream>
using namespace std;

int main()
{
    int numOfRows;

    cout << "Enter the number of rows you want in your palindrome pyramid: ";
    cin >> numOfRows;

    for (int i = 1; i <= numOfRows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        for (int x = i - 1; x > 0; x--)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}