// ager condition hit ho rahi hain to use particular loop ko skip kar do.
#include<iostream>
using namespace std;
int main(){
    for(int i = 1; i<=100; i++){
        if(i%2==0) continue; // skip this iteration of this loop.
        cout<<i<<" ";
    }
    return 0;
}