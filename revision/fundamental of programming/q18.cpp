// Ques : Print hello world ‘n’ times. Take ‘n’ as
// input from userin
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cout<<"Hello World"<<endl;
    }
    
    return 0;
}