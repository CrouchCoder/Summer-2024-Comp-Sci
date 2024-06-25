#include <iostream>
using namespace std;

int main(){
int grade;
cout<<"What is the numeric value of your grade?: ";
cin>>grade;
switch(grade){
    case 90 ... 100: cout<< "A"; break;
    case 80 ... 89: cout<< "B"; break;
    case 70 ... 79: cout<< "C"; break;
    case 60 ... 69: cout<< "D"; break;
    case 0 ... 59: cout<< "F"; break;
    default: cout<<"Invalid Entry"; break;
} cout<<endl;
}