#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    int nsp = 1;
    int nst = n-1;
    // int rnst = nst;
    int m = n - 1;
    for(int i = 1; i<= (n*2)-1; i++){
        cout<<"* ";
    }
    cout<<endl;
    for (int i = 1; i <= n-1; i++)
    {
        // for star;
        // for(int j = 1; j<= nst; j++){
        //     cout<<"* ";
        // }
        for(int j = 1; j<= m+1-i; j++){
            cout<<"* ";
        }
        // nst--;
        // for spaces;
        for (int k = 1; k <= nsp; k++)
        {
            cout<<"  ";
        }
        nsp+=2;
        // for stars;
        // for(int l = 1; l<= rnst; l++){
        //     cout<<"* ";
        // }
        for(int l = 1; l<= m + 1 - i; l++){
            cout<<"* ";
        }
        // rnst--;
        cout<<endl;
        
    }
    
    return 0;
}