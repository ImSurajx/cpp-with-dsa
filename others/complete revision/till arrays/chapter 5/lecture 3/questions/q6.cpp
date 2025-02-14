/*
Ques : Find the next permutations of Array .
Note :- If not possible then print the sorted order in
ascending order.
*/
#include <iostream>
using namespace std;
void input(vector<int> &v, int n)
{
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
}
void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "enter size of an array: ";
    cin >> n;
    vector<int> arr;
    cout << "enter element of an array: ";
    input(arr, n);
    // 1) findig pivot index;
    int idx = -1;
    for (int i = n-2; i >= 0; i--)
    {
        if(arr[i]<arr[i+1]){
            idx = i;
            break;
        }
    }
    // if array is already greatest.
    if(idx==-1){
        reverse(arr.begin(),arr.end());
    }

    // 2) sorting/reverse after pivot;
    reverse(arr.begin()+idx+1,arr.end());

    // 3) swaping idx with idx +1;
    int temp = arr[idx];
    arr[idx] = arr[idx+1];
    arr[idx+1] = temp;
    cout<<"elements: ";
    display(arr);
    return 0;
}