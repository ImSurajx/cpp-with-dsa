#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter a number: ";
    cin>>num;
    int k = 1;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= (num-i)+1; j++)
        {
            cout<<"  ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout<<k<<" ";
        }
        // int a = i-1;
        // for (int l = 1; l <= i-1; l++)
        // {
        //     cout<<a<<" ";
        //     a--;
        // }
        for (int l = i-1; l >= 1; l--)
        {
            cout<<l<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}