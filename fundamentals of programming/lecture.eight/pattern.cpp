#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    for (int i = 1; i <= n*2 - 1; i++)
    {
        for(int j = 1; j<=n*2 - 1; j++){
                // pseudo variable
                int a = i, b = j;
                if(a>n) a = 2 * n - i;
                if(b>n) b = 2 * n - j;
                int x = min(a,b);
                cout<<n-x+1<<" ";
            
        }
        cout<<endl;
    }
    
    return 0;
}