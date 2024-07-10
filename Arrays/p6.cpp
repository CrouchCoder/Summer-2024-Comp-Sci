#include <iostream>
using namespace std;

void getNum(int a[5])
{
    cout << "Array : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter number " << (i + 1) << " : ";
        cin >> a[i];
    }
}

bool checkNum(int a[5], int b[5])
{
    for (int i = 0; i < 5; i++)
    {
        bool found = false;
        for (int j = 0; j < 5; j++)
        {
            if (a[i] == b[j])
            {
                found = true;
                break;
            }
            if (!found){
                return false;
            }
        }
    }
    return true;
}
int main()
{
    int num1[5],num2[5];
    getNum(num1);
    getNum(num2);
    bool shuffled = checkNum(num1, num2);
    if(shuffled){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}