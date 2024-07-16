#include <iostream>
#include <fstream>
using namespace std;

int countLines(string fn)
{
    ifstream file(fn);

    int count = 0;
    while (!file.eof())
    {
        string str;
        getline(file, str);
        count++;
    }
    file.close();
    return count;
}
int main()
{
    int numOfLines = countLines("line.txt");
    cout << numOfLines << endl;
}