// Ques : Take input marks in percentage of a student and
//  print the Grade according to marks:
#include <iostream>
using namespace std;
int main()
{
    int mp;
    cout << "enter your marks in percentage: ";
    cin >> mp;
    if (mp >= 91 && mp <= 100)
    {
        cout << "Excellent" << endl;
    }
    else if (mp >= 81 && mp <= 90)
    {
        cout << "Very Good" << endl;
    }
    else if (mp >= 71 && mp <= 80)
    {
        cout << "Good" << endl;
    }
    else if (mp >= 61 && mp <= 70)
    {
        cout << "Can do better" << endl;
    }
    else if (mp >= 51 && mp <= 60)
    {
        cout << "Average" << endl;
    }
    else if (mp >= 41 && mp <= 50)
    {
        cout << "Below average" << endl;
    }
    else if (mp <= 41)
    {
        cout << "Fail" << endl;
    }

    return 0;
}