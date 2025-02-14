/*
Ques : Print the factorial of a given number ‘n’.
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number: ";
    cin >> n;
    int fact = 1;
    while (n > 0)
    {
        fact *= n;
        n--;
    }
    cout << "factorial is: " << fact << endl;
    return 0;
}