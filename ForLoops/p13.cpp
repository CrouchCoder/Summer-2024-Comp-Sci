#include <iostream>
using namespace std;

int main()
{
    int password = 54321;
    int number1;
    int number2;
    string operation;
    float combine = 0;
    string ans;
    for (;;)
    {
        cout << "Do you want to calculate or continue calculating?: ";
        cin >> ans;
        if (ans[0] == 'y' || ans[0] == 'Y')
        {
            cout << "Enter a number: ";
            cin >> number1;
            cout << "Enter a second number: ";
            cin >> number2;
            cout << "What operation do you want to do to these two numbers? (+, -, /, *) : ";
            cin >> operation;
            if (operation[0] == '+')
            {
                combine = number1 + number2;
                cout << combine << endl;
                continue;
                ;
            }
            else if (operation[0] == '-')
            {
                combine = number1 - number2;
                cout << combine << endl;
                continue;
            }
            else if (operation[0] == '/')
            {
                combine = number1 / number2;
                cout << combine << endl;
                continue;
            }
            else if (operation[0] == '*')
            {
                combine = number1 * number2;
                cout << combine << endl;
                continue;
            }
            else if (operation[0] != '+' || operation[0] != '-' || operation[0] != '/' || operation[0] != '*')
            {
                cout << "Not a valid function" << endl;
            }
        }
        else
        {
            break;
        }
    }
}