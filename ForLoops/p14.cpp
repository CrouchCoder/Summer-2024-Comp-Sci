#include <iostream>
using namespace std;

int main(){
    int items;
    double totalPrice;
    double price;
    cout << "Number of items: ";
    cin >> items;
    for(int i = 1; i<=items; ++i){
        cout << "Enter price of item " << i << ": ";
        cin >> price;
        totalPrice += price;
    }
    cout << "Total price of " << items << " items is " << totalPrice << endl;
}