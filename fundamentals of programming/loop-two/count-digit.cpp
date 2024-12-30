#include<iostream>
using namespace std;
int main(){
    int n, store = 0;
    cout<<"enter a number: ";
    cin>>n;
    // cout<<n<<endl;
    // n/=10;
    // store +=1;
    // cout<<n<<endl;
    // n/=10;
    // store +=1;
    // cout<<n<<endl;
    // n/=10;
    // store +=1;
    // cout<<n<<endl;  
    // cout<<store<<" "<<endl;
    int a = n;
    for(int i = 1;n > 0;i++){
        n/=10;
        store +=1;
    }
    if(a==0) cout<<"number of digit is: 0"<<endl;
    else cout<<"number of digit: "<<store<<endl;
    return 0;
}