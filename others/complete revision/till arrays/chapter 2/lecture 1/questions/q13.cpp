/*
Ques : Take input marks of a student and
print the Grade according to marks:
1) 91-100 Excellent
2) 81-90 Very Good
3) 71-80 Good
4) 61-70 Can do better
5) 51-60 Average
6) 40-50 Below Average
7) <40 Fail
*/
#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "enter your marks: ";
    cin >> marks;
    if (marks >= 91 && marks <= 100)
    {
        cout << "Excellent" << endl;
    }
    else if (marks >= 81 && marks <= 90)
    {
        cout << "Very Good" << endl;
    }
    else if (marks >= 71 && marks <= 80)
    {
        cout << "Good" << endl;
    }
    else if (marks >= 61 && marks <= 70)
    {
        cout << "Can do better" << endl;
    }
    else if (marks >= 51 && marks <= 60)
    {
        cout << "Average" << endl;
    }
    else if (marks >= 41 && marks <= 50)
    {
        cout << "Below Average" << endl;
    }
    else if (marks >= 0 && marks <= 40)
    {
        cout << "Fail" << endl;
    }

    return 0;
}