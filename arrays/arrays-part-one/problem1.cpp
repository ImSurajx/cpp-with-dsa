#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number of students: ";
    cin>>n;
    int marks[n];
    for (int i = 0; i <= n-1; i++)
    {
        cout << "enter the marks: ";
        cin >> marks[i];
    }
    for (int i = 0; i <= n-1; i++)
    {
        if (marks[i] < 35)
        {
            cout << "Student roll number is: " << i << endl;
        }
    }

    return 0;
}