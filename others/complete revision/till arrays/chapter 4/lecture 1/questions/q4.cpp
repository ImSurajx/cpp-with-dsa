/*
Bonus Ques : Print the factorials of first n numbers
*/
#include<iostream>
using namespace std;
int fact(int num)
{
    int product = 1;
    while (num > 0)
    {
        product *= num;
        num--;
    }
    return product;
}
int main(){
    int n; 
    cout<<"enter a number: ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cout<<"fact of "<< i <<" is: "<<fact(i)<<endl;
    }
    
    return 0;
}
