#include <iostream>
using namespace std;

int main(){
    int shape;
    cout<<"How many sides does your shape have?: ";
    cin>>shape;
    switch(shape){
     case 3:
     cout<< "Triangle";
     break;
     case 4:
     cout<< "Quadralateral";
     break;
      case 5:
     cout<< "Pentagon";
     break;
     case 6:
        cout<< "Hexagon";
     break;
     default:
     cout<<"Invalid Entry";
     break;
}
cout<<endl;
}