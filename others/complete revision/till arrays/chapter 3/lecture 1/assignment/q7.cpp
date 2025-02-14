/*
Print the factorials of first ‘n’ numbers
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number: ";
    cin >> n;
    int fact = 1;
    int i = 1;
    while (n > 0)
    {
        fact *= i;
        cout << i << " : " << fact << endl;
        i++;
        n--;
    }
    return 0;
}