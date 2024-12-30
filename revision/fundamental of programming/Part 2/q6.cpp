/*
Print the sum of this series :
1 - 2 + 3 - 4 + 5 - 6… upto ‘n’.
if we look close:
1-2 = -1, 3-4 = -1, +5-6 = -1 & so on
sum of every pair is -1.
so if input is even the sum will be n/2(-1) = -n/2.
or if input is odd then sum will be -n/2 + n;
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    if(n%2==0){
        cout<<"sum will be: "<< -(n/2)<<" ";
    } else cout <<"sum will be: "<< -(n/2)+n<<" ";
    return 0;
}