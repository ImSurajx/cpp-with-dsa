#include<iostream>
using namespace std;
int hcf(int x, int y){
    int hcf = 0;
    for (int i = min(x,y); i >= 1; i--)
    {
        if(x%i==0 && y%i == 0){ // i is a common factor.
            hcf = i;
            break;
        } 
    }
    return hcf;
}
int main(){
    int x;
    cout<<"enter 1st number: ";
    cin>>x;
    
    int y;
    cout<<"enter 2nd number: ";
    cin>>y;

    cout<<"HCF will be: "<<hcf(x,y)<<endl;
    
    return 0;
}