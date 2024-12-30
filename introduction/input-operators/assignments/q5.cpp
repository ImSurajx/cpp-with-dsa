// WAP to find the difference between ASCII of two characters ,take them as input .
#include<iostream>
using namespace std;
int main(){
    char ch_one, ch_two;
    cout<<"enter first character: ";
    cin>>ch_one;
    cout<<"enter second character: ";
    cin>>ch_two;
    cout<<"the difference b/w ASCII of two characters: "<< int(ch_one) - int(ch_two) <<endl;
    return 0;
}