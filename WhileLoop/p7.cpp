#include <iostream>
using namespace std;

int main()
{
    srand(time(0));
    int num = (rand() %100) +1;
    int guess;

    while (guess != num)
    {
        cout << "Guess a number between 1 and 100: ";
        cin >> guess;
        if (guess > num)
        {
            cout << "Too high!" << endl;
        }
        if (guess < num)
        {
            cout << "Too low" << endl;
        }
    }
    if (guess == num){
        cout << "You got it right!" << endl;
    }
}
    
