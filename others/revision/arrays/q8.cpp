// Ques : Find the doublet in the Array whose sum is
// equal to the given value x.
#include<iostream>
using namespace std;

// for taking input:
void input(vector<int>&arr, int size){
    for (int i = 0; i < size; i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }   
}

// for displaying arrays:
void display(vector<int>&arr){
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"enter size of array: ";
    cin>>n;
    cout<<"enter elements of array: ";
    vector<int>arr;
    input(arr,n);
    cout<<"elements are: ";
    display(arr);
    int x;
    cout<<"enter x: ";
    cin>>x;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == x)
            {
               cout<<"("<<i<<" "<<j<<")"<<endl;
            }
            
        }
        
    }
    
    return 0;
}