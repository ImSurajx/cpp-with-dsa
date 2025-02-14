// WAP for finding the volume of the cylinder by taking radius and height as input.
#include <iostream>
using namespace std;
int main()
{
    int radius, height;
    cout << "enter radius & height of cylinder: ";
    cin >> radius >> height;
    cout << "volume of cylinder is: " << 3.14 * (radius * radius) * height << endl;
    return 0;
}