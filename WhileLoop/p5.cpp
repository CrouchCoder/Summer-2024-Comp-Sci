#include <iostream>
using namespace std;

int main()
{
    string str1;
    string str2;
    int count1 = 0;
    int count2 = 0;
    cout << "Enter word 1: ";
    getline(cin, str1);
    cout << "Enter word 2: ";
    getline(cin, str2);
    int i = 0;
    while (i < str1.length())
    {
        if (str1[i] < str2[i]){
            count1++;
            break;
        }else if (str1[i] > str2[i]){
            count2++;
            break;
        }
        i++;
    }
    if (count1 > count2){
        cout << "Word 1 is first in the alphabet." << endl;
    }else{
        cout << "Word 2 is first in the alphabet." << endl;
    }
}