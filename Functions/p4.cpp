#include <iostream>
using namespace std;

void sayHi(string name)
{
    if (name != "end"){
    cout << "Hello " << name << "!" << endl;
    }
}

int main()
{
    string name;
    while (true)
    {
        cout << "Enter your name: ";
        cin >> name;
        sayHi(name);
    }
}