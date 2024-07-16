#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    cout << "Enter text to save it to output.txt : " << endl;
    ofstream f("output.txt");
    string s;
    do
    {
        getline(cin, s);
        f << s << endl;
    } while (s != "stop");
    f.close();
}