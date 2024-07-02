#include <iostream>
using namespace std;

int main()
{
    string pswrd = "caden";
    string atmpt;
    
    
    for (;;)
    {
        cout << "Enter password: ";
        cin >> atmpt;
        if (atmpt == "caden")
        {
            cout << "Correct password!" << endl;
            break;
        }else {
            cout << "Incorrect Password!" << endl;
            continue;
        }
    }
    
}