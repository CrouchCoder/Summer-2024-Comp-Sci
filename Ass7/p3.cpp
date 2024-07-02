#include <iostream>
using namespace std;

int main()
{
    int num_terms;
    int a = 0;
    int b = 1;
    int next_term;

    cout << "Enter the number of terms in Fibonacci sequence: ";
    cin >> num_terms;

    cout << "Fibonacci Sequence up to " << num_terms << " terms: ";

    if (num_terms >= 1)
    {
        cout << a;
    }
    if (num_terms >= 2)
    {
        cout << " " << b;
    }

    for (int i = 3; i <= num_terms; i++)
    {
        next_term = a + b;
        cout << " " << next_term;
        a = b;
        b = next_term;
    }
    cout << endl;
}