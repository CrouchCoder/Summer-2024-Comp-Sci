#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("input.txt");
    if (!f)
    {
        cerr << "Failed to open the file." << endl;
        return 1;
    }

    string s;
    while (getline(f, s))  // Read each line until the end of the file
    {
        cout << s << endl;
    }

    f.close();
    return 0;
}