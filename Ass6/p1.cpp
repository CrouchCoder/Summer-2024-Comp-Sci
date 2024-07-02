#include <iostream>
using namespace std;

int main()
{
    int totalrep = 20;
    int count5 = 0;
    int count3 = 0;
    int num[totalrep];
    cout << "Enter 20 number to tell if theres more numbers that are divisible by 3 or there more that are divisible by 5." << endl;
    for (int i = 0; i < totalrep; i++)
    {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> num[i];
    }
    for (int i = 0; i < totalrep; i++)
    {
        if (num[i] % 3 == 0)
        {
            count3++;
        }
        else if (num[i] % 5 == 0)
        {
            count5++;
        }
    }
    if (count5 > count3)
    {
        cout << "There are more numbers divisible by 5 than there are numbers divisible by 3." << endl;
    }
    else if (count3 > count5)
    {
        cout << "There are more numbers divisible by 3 than there are numbers divisible by 5." << endl;
    }
    else
    {
        cout << "There are equal numbers divisible by 3 and numbers divisible by 5." << endl;
    }
}