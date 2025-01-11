#include<iostream>
#include<vector>
using namespace std;

// for taking input inside array.
void input(vector<int>&v, int size){
    for (int i = 0; i < size; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    return;
}

// for displaying array.
void display(vector<int>&v, int size){
    for (int i = 0; i < size; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return;
}

// reversing the array.
void reverse(vector<int>&v,int a, int b){
     while(a<=b){
        int temp = v[a];
        v[a] = v[b];
        v[b] = temp;
        a++;
        b--;
     }
     return;
}

int main(){
    int n;
    cout<<"enter size of array: ";
    cin>>n;
    vector<int>v;
    cout<<"enter elemets of vector: ";
    input(v,n);
    cout<<"current elements of vector: ";
    display(v,n);
    int k;
    cout<<"enter the number of element you want to reverse: ";
    cin>>k;
    if(k>n) k %=n; 
    reverse(v,n-k,n-1); // n-k, n-1 for reversing the value k times.
    reverse(v,0,n-(k+1));
    reverse(v,0,n-1);
    cout<<"array after k times reverse: ";
    display(v,n);
    /*
    cout<<"current elements in reverse: ";
    display(v,n);
    reverse(v,0,n-(k+1));
    cout<<"current elements in reverse: ";
    display(v,n);
    reverse(v,0,n-1);
    cout<<"current elements in reverse: ";
    display(v,n);

    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"elements of vector: ";
    for (int i = 0; i < n; i++)
    {
         cout<<v[i]<<" ";
    }
    cout<<endl;
    for (int i = 3, j = v.size() - 1; i <= j; i++, j--)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
    
    cout<<"current elements of vector: ";
    for (int i = 0; i < n; i++)
    {
         cout<<v[i]<<" ";
    }

    for (int i = 0, j = 3; i <= j; i++, j--)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
    cout<<endl;
    cout<<"current elements of vector: ";
    for (int i = 0; i < n; i++)
    {
         cout<<v[i]<<" ";
    }
    cout<<endl;
    for (int i = 0, j = v.size()-1; i <= j; i++, j--)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
    cout<<"current elements of vector: ";
    for (int i = 0; i < n; i++)
    {
         cout<<v[i]<<" ";
    }
    cout<<endl; */
    return 0;
}
