#include <iostream>
using namespace std;
int main()
{
    string shape;
    string pora;
    int side;
    int perimeter;
    int area;
    int base;
    int height;
    double radius = 0;
    double circumference = 0;
    double radius2 = 0;

    cout << "Enter the 2D shape that you want to calculate the area or perimeter for: ";
    cin >> shape;

    if (shape[0] == 's' || shape[0] == 'S')
    {
        cout << "Do you want to calculate perimeter or area?: ";
        cin >> pora;
        switch (pora[0])
        {
        case 'p':
        case 'P':
            cout << "Enter length of side: ";
            cin >> side;
            perimeter = 4 * side;
            cout << perimeter << endl;
            break;

        case 'a':
        case 'A':
            cout << "Enter length of side: ";
            cin >> side;
            area = side * side;
            cout << area << endl;
            break;
        }
    }
    else if (shape[0] == 't' || shape[0] == 'T')
    {
        cout << "Do you want to calculate perimeter or area?: ";
        cin >> pora;
        switch (pora[0])
        {
        case 'p':
        case 'P':
            cout << "Enter length of side: ";
            cin >> side;
            perimeter = 3 * side;
            cout << perimeter << endl;
            break;

        case 'a':
        case 'A':
            cout << "Enter length of base: ";
            cin >> base;
            cout << "Enter length of height: ";
            cin >> height;
            area = (base * height) / 2;
            cout << area << endl;
            break;
        }
    }
    else if (shape[0] == 'c' || shape[0] == 'C')
    {
        cout << "Do you want to calculate circumference or area?: ";
        cin >> pora;
        switch (pora[0])
        {
        case 'c':
        case 'C':
            cout << "Enter radius of circle: ";
            cin >> radius;
            circumference = 2 * 3.14159265 * radius;
            cout << circumference << endl;
            break;

        case 'a':
        case 'A':
            cout << "Enter radius of circle: ";
            cin >> radius2;
            area = 3.141592653 * radius2 * radius2;
            cout << area << endl;
            break;
        }
    }
    else
    {
        cout << "Shape isn't registered in this calculator." << endl;
    }
}