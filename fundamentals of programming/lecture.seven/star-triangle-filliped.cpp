#include <iostream>
using namespace std;
int main()
{
    int side;
    cout << "enter a number: ";
    cin >> side;
    for (int i = 1; i <= side; i++)
    {
        for (int j = 1; j <= (side-i)+1; j++)
        {
            cout <<"* ";
        }
        
    }

    return 0;
}