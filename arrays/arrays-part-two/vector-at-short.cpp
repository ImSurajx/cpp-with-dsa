#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter size of vector: ";
    cin>>n;
    vector<int>v;
    cout<<"enter elements of vector: ";
    for (int i = 0; i < n; i++)
    {
        // cin>>v[i] -> for using cin>>v[i] we need to defined vector size first for non-defind vector size it will give error.
        int x;
        cin>>x;
        v.push_back(x);
    }
    // we use 'at' for updating value that are inside vector. 
    // key diference:  v.at(i) = 5; or v[i] = 7; --> both are same only brakits are differ.
    cout<<"enter updated value of vector: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.at(i) = x;
    }
    cout<<"elements of vector is: ";
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // sort -->  this will short element in accending order.
    sort(v.begin(),v.end()); 
    cout<<"elements of vector after shorting: ";
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}