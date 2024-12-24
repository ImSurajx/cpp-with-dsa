#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter a number: ";
    cin>>num;
    // n -> loop i = 2, to n-1;
    for(int i=2; i<=num-1; i++){
        if(num%i==0){
            cout<<num<<" is composite number."<<endl;
            break; // ager condition true hoti hain to loop wahi khatam ho jayega.
        } 
    }    
    return 0;
}