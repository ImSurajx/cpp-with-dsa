// q7. print all alphabets (uppercase) with their ascii value.
#include<iostream>
using namespace std;
int main(){
     for (char ch = 'A'; ch <= 'Z'; ch++)
     {
        cout<<ch<<" "<<int(ch)<<endl;
     }
     
    return 0;
}