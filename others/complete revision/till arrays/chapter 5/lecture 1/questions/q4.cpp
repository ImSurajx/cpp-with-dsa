/*
Linear search
Ques : Find the element x in the array . Take array and
x as input.
*/
#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "enter size of an array: ";
    cin >> size;
    int arr[size];
    int x;
    cout<<"enter element you want to find: ";
    cin>>x;
    cout<<"ente elements of array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
            if(arr[i] == x) cout<<"index: "<<i<<" element is: "<<x<<endl;
    }
    return 0;
}