#include <iostream>
using namespace std;

int main()
{
    int numOfRows;
    int count = 1;

    cout << "Enter the numbers of rows you want in your floyd's triangle: ";
    cin >> numOfRows;

    for (int i = 1; i <= numOfRows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}