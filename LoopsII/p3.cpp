#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a postitive integer: ";
    cin >> num;
    int i = 0;
    do
    {
        for (int i = 0; i < num; i++){
            cout << "* ";
        }
        i++;
        cout << endl;
    } 
    while (i < num);
}