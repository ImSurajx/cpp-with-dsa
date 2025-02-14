// Find the first non-repeating element in the arry
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
    /*
    Dry Run
    arr[5] = {1,1,2,2,3}
    i = 0,4;
    j = 0,4;
    count = 2;
    when
    arr[0];
    1 == 1
    1 == 1
    1 == 2
    1 == 2
    1 == 3

    arr[1];
    1 == 1;
    */
    int count;
    for (int i = 0; i < n; i++)
    {
        count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout << arr[i] << " ";
            break;
        }
    }
    return 0;
}