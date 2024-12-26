#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"enter number of rows: ";
    cin>>r;
    cout<<"enter number of columns: ";
    cin>>c;
    for (int i = 1; i <= r; i++)
    {
        for (int i = 1; i <= c; i++)
        {
            cout<<"* ";
        }
        
        cout<<endl;
    }
    return 0;
}