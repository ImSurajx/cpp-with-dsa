/*
Ques : Find the doublet in the Array whose sum is
equal to the given value x.
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter size of array: ";
    cin >> n;
    vector<int> arr;
    cout << "enter elements of vector: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int x;
    cout << "enter x: ";
    cin >> x;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i]+arr[j]==x){
                cout<<"("<<i<<", "<<j<<")"<<endl;
            }
        }
        
    }
    
    return 0;
}