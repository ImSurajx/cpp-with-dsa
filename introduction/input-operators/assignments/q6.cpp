// Find the output of the below code
#include <iostream>
using namespace std;
int main()
{
    // Step 1: 7/5 * 6 * 6 = 1 * 6 * 6 = 36
    // Step 2: 4 + 36 + 9 = 49
    // Step 3: 49 % 100 = 49
    int i = (4 + 7 / 5 * 6 * 6 + 9) % 100;
    cout << i<<endl;
    return 0;
}