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
    int n,r;
    cout<<"enter n: ";
    cin>>n;
    cout<<"enter r: ";
    cin>>r;
    cout<<"combination will be: "<<combination(n,r)<<endl;
    cout<<"permutation will be: "<<permutation(n,r)<<endl;
    return 0;
}