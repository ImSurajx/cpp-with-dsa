// Ques : Given an integer. Print the absolute
// value of that integer.
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter a number: ";
    cin >> num;
    if (num < 0)
    {
        cout << "absolute value is: " << -num << endl;
    }
    else
    {
        cout << "absolute value is: " << num << endl;
    }
    return 0;
}