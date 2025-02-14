// Ques : Take positive integer input and tell if it
// is even or odd
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter a number: ";
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "even number." << endl;
    }
    else
    {
        cout << "odd number." << endl;
    }

    return 0;
}