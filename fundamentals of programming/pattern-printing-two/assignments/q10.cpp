#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    int nsp = (n*2)-3;
    for (int i = 1; i <= n-1; i++)
    {
        // stars;
        for (int j = 1; j <= i; j++)
        {
            cout<<"* ";
        }
        // spaces
        for (int k = 1; k <= nsp; k++)
        {
            cout<<"  ";
        }
        nsp = nsp - 2;
        for (int l = 1; l <= i; l++)
        {
            cout<<"* ";
        }
        
        
        cout<<endl;
    }

    for (int i = 1; i <= 2; i++)
    {
        for (int j = 1; j <= n*2-1; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
        
    }
    
    int star = n-1;
    nsp = 1;
    for (int i = 1; i <= n-1; i++)
    {
        //stars
        for (int j = 1; j <= star; j++)
        {
            cout<<"* ";
        }
        
        // spaces
        for (int k = 1; k <= nsp; k++)
        {
            cout<<"  ";
        }
        for (int l = 1; l <= star; l++)
        {
            cout<<"* ";
        }
        star--;
        nsp+=2;
        cout<<endl;
        
    }
    
    
    return 0;
}