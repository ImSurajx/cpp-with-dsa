// Ques : Write a function to compute the greatest
// common divisor of two given numbers
#include<iostream>
using namespace std;
int hcf(int x, int y){
    int h = 0;
    for (int i = min(x,y); i > 0; i--)
    {
        // hcf lies below min of x & y;
        if (x%i==0 && y%i==0)
        {
            h = i;
            break;
        }
        
    }
    return h;
}
int main(){
    int n,m;
    cout<<"enter 1st number: ";
    cin>>n;
    cout<<"enter 2nd number: ";
    cin>>m;
    cout<<"HCF will be: "<<hcf(m,n)<<endl;
    return 0;
}