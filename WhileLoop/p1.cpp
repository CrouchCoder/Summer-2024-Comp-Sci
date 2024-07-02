#include <iostream>
using namespace std;

int main()
{
    string str;
    int vcount = 0;
    cout << "Enter a string: ";
    getline(cin, str);
    int i = 0;
    while (i < str.length())
    {
        str[i] = (str[i] >= 'A' and str[i]<='Z') ? str[i] + 32 : str[i];
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            vcount++;
        }
        i++;
    }
    cout << "Number of vowels are: " << vcount << endl;
}