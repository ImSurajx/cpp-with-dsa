/*
Ques: Given an array of marks of students, if the
mark of any student is less than 35 print its rolls number.
[roll number here refers to the index of the array.]
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
    for (int i = 0; i < x; i++)
    {
        if (marks[i] < 35)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}