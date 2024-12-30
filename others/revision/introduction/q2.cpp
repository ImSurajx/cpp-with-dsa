// Calculating percentage of 5 subjects
#include<iostream>
using namespace std;
int main(){
    float x1,x2,x3,x4,x5;
    cout<<"enter your marks of each subject one by one: ";
    cin>>x1>>x2>>x3>>x4>>x5;
    cout<<"Percentage: "<<(x1+x2+x3+x4+x5)/5;
    return 0;
}