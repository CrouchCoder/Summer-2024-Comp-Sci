#include <iostream>
using namespace std;

int main()
{
    int n;
    char letter = 'A';

    cout << "Enter the number of rows that you want for your letter pyramid: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << letter << " ";
        }
        cout << endl;
        letter++;
    }
}