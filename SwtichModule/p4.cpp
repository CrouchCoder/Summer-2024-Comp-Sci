#include <iostream>
using namespace std;

int main(){
int dayOfMonth;
cout<<"What month of the year is it?: ";
cin>>dayOfMonth;
switch(dayOfMonth){
    case 1:case 3:case 5: case 7:case 8: case 10: case 12:
    cout<< "There are 31 days in this month";
    break;
    case 2:
    cout<< "There are 28 days in this month";
    break;
    case 4:case 6:case 9: case 11:
    cout<< "There are 30 days in this month";
    break;
    default:
    cout<<"Invalid Entry";
    break;
}
cout<<endl;
}