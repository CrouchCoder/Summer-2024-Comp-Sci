#include <iostream>
using namespace std;

double celsiusToFahrenheit(double f)
{
    double c = (f * 9.0 / 5.0) + 32;
    return c;
}

double fahrenheitToCelsius(double c)
{
    double f = (5.0 / 9.0) * (c - 32);
    return f;
}

int main()
{
    double temp;
    char unit;
    cout << "Enter temp: ";
    cin >> temp;
    cout << "Is the temp in F or C?: ";
    cin >> unit;
    if (unit == 'F'){
        cout << "Temperature in celcius is: " << fahrenheitToCelsius(temp) << endl;
    }else if (unit == 'C'){
        cout << "Temperature in celcius is: " << celsiusToFahrenheit(temp) << endl;
    }
}