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
    cout<<"elements of vector: ";
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    
    return 0;
}