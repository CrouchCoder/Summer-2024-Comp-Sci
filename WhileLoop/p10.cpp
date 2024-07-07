#include <iostream>
using namespace std;

int main()
{
    string str;
    string out;
    cout << "Enter a sentence to print only the first occurance letters (no spaces): ";
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        bool already = false;
        for (int j = 0; j < out.length(); j++)
        {
            if (str[i] == out[j])
            {
                already = true;
                break;
            }
        }
        if (already == false)
        {
            out += str[i];
        }
    }
    cout << out << endl;
}