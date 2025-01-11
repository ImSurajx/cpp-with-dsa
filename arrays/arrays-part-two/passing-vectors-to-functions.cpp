#include<iostream>
#include<vector>
using namespace std;
void change(vector<int>a){ // vector are passed by value, each time you pass, new vector created.
    // note: if we use '&a' then we can modify access & update existing vector from main function.
    a[0] = 1000;
    cout<<"elements of vector: ";
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
}
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
    sort(v.begin(),v.end()); 
    cout<<"elements of vector after shorting: ";
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    change(v);
    cout<<"elements of vector after shorting: ";
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}