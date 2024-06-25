#include <iostream>
using namespace std;

int main(){
int menuItem;
cout<<"Which menu item do you want?: ";
cin>>menuItem;
switch(menuItem){
    case 1:
    cout<< "The price is $10";
    break;
    case 2:
    cout<< "The price is $20";
    break;
    case 3:
    cout<< "The price is $30";
    break;
    case 4:
    cout<< "The price is $25";
    break;
    case 5:
    cout<<"The price is $39";
    break;
    default:
    cout<<"Item not on menu";
    break;
}
cout<<endl;
}