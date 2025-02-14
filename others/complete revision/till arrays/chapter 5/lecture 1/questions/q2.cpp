/*
Size and sizeof operator(How can we use it to
find the Length of array?)
*/
#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "enter total number of student: ";
    cin >> x;
    int marks[x];
    cout << "enter marks of each studnet one by one: ";
    for (int i = 0; i < x; i++)
    {
        cin >> marks[i];
    }
    cout << "student roll no: (marks<35): ";
    for (int i = 0; i < x; i++)
    {
        if (marks[i] < 35)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    int size = sizeof(marks) / sizeof(marks[0]);
    cout << "size of array is: " << size << endl;
    cout << endl;
    return 0;
}