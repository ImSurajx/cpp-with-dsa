// q1. how can you out "Physics" and "Wallah" in two different lines in c++;
#include <iostream>
using namespace std;
int main()
{
    cout << "Physics" << endl
         << "Wallah" << endl;
    cout << "Physics\nWallah" << endl;
    return 0;
}