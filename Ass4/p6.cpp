#include <iostream>
using namespace std;

int main(){
    int day;
    cout << "Enter which day of the week it is: ";
    cin >> day;
    if (day<6){
        cout << "Weekday";
    } else {
        cout << "Weekend";
    }
    cout << endl;
}