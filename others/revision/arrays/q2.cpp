// Ques : Calculate the sum of all the elements in the
// given array.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter size of array: ";
    cin >> n;
    int element[n];
    int sum = 0;
    cout << "enter each elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> element[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum += element[i];
    }
    cout << "Sum of all the elements is: " << sum << endl;
    return 0;
}