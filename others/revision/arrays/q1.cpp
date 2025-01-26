//  Question 1: Ques: Given an array of marks of students, if the
// mark of any student is less than 35 print its roll number. [roll number here refers to the index of the array.]
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter total number of student: ";
    cin >> n;
    int student[n];
    cout << "enter marks of each student: ";
    for (int i = 0; i < n; i++)
    {
        cin >> student[i];
    }
    cout << "studnet roll number whom has marks less than 35: ";
    for (int i = 0; i < n; i++)
    {
        if (student[i] < 35)
        {
            cout << i << " ";
        }
    }

    return 0;
}