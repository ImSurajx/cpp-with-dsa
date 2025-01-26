// Ques : Find the element x in the array . Take array and
//  x as input.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "enter elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool flag = false;
    int x;
    cout << "enter element you want find: ";
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            cout << arr[i] << " is present at index " << i << endl;
            flag = true;
        }
    }
    if (flag == false)
    {
        cout << "invalid input." << endl;
    }
    return 0;
}