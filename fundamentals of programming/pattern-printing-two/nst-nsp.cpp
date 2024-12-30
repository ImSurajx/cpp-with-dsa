#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter side of pyramid: ";
    cin>>num;
    int nst = 1;
    int nsp = num-1;
    for (int i = 1; i <= num; i++)
    {
        // for spaces
        for (int j = 1; j <= nsp; j++)
        {
            cout<<"  ";
        }
        nsp--;
        // for stars
        for (int k = 1; k <= nst; k++){
            cout<<"* ";
        }
        nst+=2;
        cout<<endl;
    }
    
    return 0;
}