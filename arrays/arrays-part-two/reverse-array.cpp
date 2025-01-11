// write a program to reverse the array without using any extra array;
// write a program to copy the contents of one array into another in reverse order.
#include <iostream>
#include <vector>
using namespace std;
void input(vector<int> &a, int size)
{
    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    cout << endl;
}
void reversePart(int i, int j, vector<int>&v){
    while(i<=j)
     {
         // swap v[i] and v[j];
         int temp = v[i];
         v[i] = v[j];
         v[j] = temp;
         i++;
         j--;
      }
    return;
}
void display(vector<int> &a, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return;
}

int main()
{
    int n;
    cout << "enter size of array: ";
    cin >> n;
    vector<int> v;
    cout << "enter elements of array: ";
    input(v, n);
    int x,y;
    cout<<"enter x: ";
    cin>>x;
    cout<<"enter y: ";
    cin>>y;
    reversePart(x,y,v);
    cout << "current array: ";
    display(v, n);
    return 0;
}