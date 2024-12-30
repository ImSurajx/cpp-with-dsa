#include <iostream>
using namespace std;
void triangle(int x)
{
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
int main()
{
    triangle(3);
    triangle(4);
    triangle(5);
    return 0;
}