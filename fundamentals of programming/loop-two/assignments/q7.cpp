// Print the factorials of first ‘n’ numbers
#include <iostream>
using namespace std;
int main()
{
    int num, factorial = 1;
    cout << "enter a number: ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        factorial *= i;
        cout << factorial << " " << endl;
    }

    return 0;
}