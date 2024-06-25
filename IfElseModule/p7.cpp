#include <iostream>
using namespace std;

int main(){
    int dlExpiration;
    cout << "Enter Driver Lisence Expiration Date: ";
    cin >> dlExpiration;
    string expirationDate = dlExpiration >= 2023 ? "Not Expired" : "Expired";
    cout << expirationDate<<endl;
}