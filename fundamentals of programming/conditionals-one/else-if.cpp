// q11. take input marks of a student and print the grade according to marks:
#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "enter your marks: ";
    cin >> marks;
    if (91 <= marks && marks <= 100)
    {
        cout << "excellent"<<endl;
    }
    else if (81 <= marks)
    {
        cout << "very good"<<endl;
    }
    else if (71 <= marks)
    {
        cout << "good"<<endl;
    }
    else if (61 <= marks)
    {
        cout << "can do better"<<endl;
    }
    else if (51 <= marks)
    {
        cout << "average"<<endl;
    }
    else if (40 <= marks)
    {
        cout << "below average"<<endl;
    }
    else
    {
        cout << "fail"<<endl;
    }
}