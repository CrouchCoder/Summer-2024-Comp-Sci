#include <iostream>
using namespace std;

int main(){
    int num;
    int lastnum;
    int greatest = 0;
    cout << "Enter 10 positive numbers."<<endl;

    for (int i =1; i<=10; i++){
        cout << "Enter number " << i << " :";
        cin >> num;
        if (num > greatest){
            num = greatest;
            lastnum = num;
        }else{
            lastnum = num;
        }
    }
    if (greatest = lastnum){
    cout << "The last number is the greatest";
    }else 
    {cout << "The last number is not the greatest";}
}