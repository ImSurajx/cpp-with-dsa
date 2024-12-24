#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter a number: ";
    cin>>num;
    bool flag = true; // true mean prime.
    // n -> loop i = 2, to n-1;
    for(int i=2; i<=num-1; i++){
        if(num%i==0){ // i is a factor of n;
            flag = false; // using boolean we can store the state of a data
            break; // ager condition true hoti hain to loop wahi khatam ho jayega.
        } 
    } 
    if (num==1) cout<<"1 is neither prime or nor composite"<<endl;   
    else if(flag == true)cout<<num<<" is a prime number. "<<endl;
    else cout<<num<<" is a composite number."<<endl;
    return 0;
}