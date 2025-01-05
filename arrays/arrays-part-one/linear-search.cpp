#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter size of array: ";
    cin >> n;
    int arr[n], x;
    bool flag = false;
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
        if (arr[i] == x)
        {
            flag = true;
        }
    }
    cout << "enter element you want to search: ";
    cin >> x;
    if (flag == true)
        cout << "yes, present." << endl;
    else
        cout << "not present" << endl;

    return 0;
}