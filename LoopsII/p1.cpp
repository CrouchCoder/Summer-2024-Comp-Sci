#include <iostream>
using namespace std;

int main()
{
    srand(time(0));
    int numToGuess = rand() % 100 + 1;
    int guess;
    do
    {
        cout << "Enter your guess: ";
        cin >> guess;
        if (guess > numToGuess)
        {
            cout << "Too hight!\n";
        }
        else if (guess < numToGuess)
        {
            cout << "Too low!\n";
        }
        else
        {
            cout << "You guess it!\n";
            // break;
        }
    } while (guess != numToGuess); // while(true);
}