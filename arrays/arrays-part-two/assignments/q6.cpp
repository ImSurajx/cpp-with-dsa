// Find the unique number in a given Array where all the elements are being repeated twice with one value being unique.
#include <iostream>
using namespace std;
void input(vector<int> &v, int size)
{
    for (int i = 0; i < size; i++)
    {
        int z;
        cin >> z;
        v.push_back(z);
    }
    return;
}
void display(vector<int> &v, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return;
}
int main()
{
    int n;
    cout<<"enter size of array: ";
    cin>>n;
    cout<<"enter elements of array: ";
    if (n <= 0) {
        cout << "Array size must be positive." << endl;
        return 0;
    }
    vector<int>v;
    input(v,n);
    cout<<"elements of array: ";
    display(v,n);
    int unique = -1;
    for (int i = 0; i <= n-1; i++)
    {
        bool flag = true; // considring every element is uniqe
        for (int j = 0; j < n-1; j++)
        {
            if ( i!=j && v[i]==v[j])
            {
                flag = false;
                break; // Stop checking further for this element
            }
            
        }
        if (flag)
        {
            unique = v[i]; // Found the unique element
            break;
        }  
    }
    cout<<"unique number is: "<<unique<<endl;
    return 0;
}