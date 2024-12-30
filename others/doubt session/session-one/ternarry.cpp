#include<iostream>
using namespace std;
int main(){
    cout<<(-4>0? 'p' : 'N')<<endl; // ager ternary me true false ki jagh ek character hain to output character hi hoga.
    cout<<(-4>0? 4 : 'N')<<endl;  // ager ternary me true false ki jagh ek jagah character hain or dusri jagah integer hain  to output integer hoga hi hoga.
    // integer > char or float in ternarry.
    return 0;
}