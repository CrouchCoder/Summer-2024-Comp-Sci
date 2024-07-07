#include <iostream>
using namespace std;

int main(){
    int stu;
    int course;
    cout << "Enter number of students: ";
    cin >> stu;
    int stucount = 0 ;
    while (stucount < stu){
    cout << "Enter the number of courses: ";
    cin >> course;
    
    float sum = 0;
    for(int i =0; i< course; i++){
        float grade;
        cout << "Enter the grade: ";
        cin >> grade;
        sum += grade;
    }
    cout << "GPA is: " << sum/course << endl;
    stucount++;
    }
}/workspaces/cautious-octo-telegram/Quizzes