#include <iostream>
using namespace std;

int main()
{
    int choice;
    float num1;
    float num2;
    float result;
    cout << "Menu Options" << endl;
    cout << "Option 1: Addition" << endl;
    cout << "Option 2: Subtraction" << endl;
    cout << "Option 3: Multiplication" << endl;
    cout << "Option 4: Division" << endl;

    cout << "Choose an option. (1,2,3,4): ";
    cin >> choice;
    if (choice < 1 || choice > 4)
    {
        cout << "Invalid option, try again";
    }
    cout << "Pick your first number: ";
    cin >> num1;
    cout << "Pick your second number: ";
    cin >> num2;

    switch (choice)
    {
    case 1:
        result = num1 + num2;
        cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
        break;
    case 2:
        result = num1 - num2;
        cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
        break;
    case 3:
        result = num1 * num2;
        cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
        break;
    case 4:
        if (num2 == 0)
        {
            cout << "Cannot divide by zero." << endl;
        }
        else
        {
            result = num1 / num2;
            cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
        }
        break;
    }
}