#include <iostream>
using namespace std;

void getNames(string& names)
{
    cout << "Enter a string of names seperated by spaces: ";
    getline(cin, names);
}

string getFirst(string& name)
{
    string current = "";
    string firstName = "";
    bool firstletter = true;

    for (int i = 0; i <= name.length(); i++)
    {
        if (i < name.length() && name[i] != ' ')
        {
            current += name[i];
        }
        else
        {
            if (firstletter || current < firstName)
            {
                firstName = current;
                firstletter = false;
            }
            current = "";
        }
    }
    return firstName;
}
int main()
{
    string nameList;
    getNames(nameList);
    string firstName = getFirst(nameList);
    cout << firstName << endl;
}