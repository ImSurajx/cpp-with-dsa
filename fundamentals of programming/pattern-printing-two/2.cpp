#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter a number: ";
    cin>>num;
    int nst = num;
    int nsp = 1;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            cout<<"  ";
        }
        nsp++;
        for(int k = 1; k<=nst; k++){
            cout<<"* ";
        }
        nst-=2;
        cout<<endl;
    }
    return 0;
}