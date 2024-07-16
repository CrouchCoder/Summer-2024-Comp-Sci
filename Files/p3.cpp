#include <iostream>
#include <fstream>
using namespace std;

void copyFile(string inFileName, string outFileName)
{
    ifstream inFile(inFileName);
    ofstream outFile(outFileName);
    while (!inFile.eof())
    {
        string line;
        getline(inFile, line);
        outFile << line << endl;
    }
    inFile.close();
    outFile.close();
}
int main()
{
    copyFile("source.txt", "destination.txt");
}