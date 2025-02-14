/*
Ques : Given the marks of the student. If the marks
are greater than 33 print the result as pass
otherwise fail without using if-else statement.
*/
#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter marks of student: ";
    cin>>marks;
    marks>33?cout<<"pass."<<endl:cout<<"fail."<<endl;
    return 0;
}