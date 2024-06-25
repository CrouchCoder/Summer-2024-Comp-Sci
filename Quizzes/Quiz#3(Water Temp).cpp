#include <iostream>
using namespace std;

int main(){
    int waterTemp;
    cout << "What is the temperature of water?: ";
    cin >> waterTemp;
    if (waterTemp <= 0){
        cout << "Ice";
    } else if (waterTemp >=100){
        cout << "Steam";
    } else {
        cout << "Liquid";
    }    
    cout << endl;
}