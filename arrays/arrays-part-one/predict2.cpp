#include<iostream>
using namespace std;
int main(){
    int size;
    cin>>size;
    int arr[size];
    for ( i = 1; i <= size; i++)
    {
        cin>>arr[i];
        cout<<arr[i];
    }
    return 0;
}

// output = error, undeclared identifier