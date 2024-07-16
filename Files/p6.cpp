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

int countWords(string fn)
{
    ifstream file(fn);

    int count = 0;
    while (!file.eof())
    {
        string str;
        getline(file, str);
        for (int i = 0; i < str.length(); i++)
        {
            if (i == 0 && str[i] != ' ')
            {
                count++;
            }
            else if (str[i] == ' ')
            {
                count++;
            }
        }
    }
    file.close();
    return count;
}

int countChar(string fn)
{
    ifstream file(fn);

    int count = 0;
    while (!file.eof())
    {
        string str;
        getline(file, str);
        count = str.length();
    }
    file.close();
    return count;
}
int main()
{
    int numOfLines = countLines("line.txt");
    cout << numOfLines << endl;
    int numOfWords = countWords("words.txt");
    cout << numOfWords << endl;
    int numOfChar = countChar("char.txt");
    cout << numOfWords << endl;
}