#include<iostream>
using namespace std;
int fact(int x){
    int fac = 1;
    while (x>0)
    {
        fac *= x;
        x--;
    }
    return  fac;
}
int combination(int n, int r){
    int ncr = fact(n) / (fact(r)*fact(n-r));
    return ncr;
}
int permutation(int n, int r){
    int npr = fact(n) / fact(n-r);
    return npr;
}

int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    for (int i = 0; i <= n; i++)
    {
        for (int k = 0; k <= n-i-1; k++)
        {                                                                                                           
            cout<<"  ";
        }
        
        for (int j = 0; j <= i; j++)
        {
            cout<<combination(i,j)<<"  ";
        }
        cout<<endl;
    }
    
}