// Ques: What is the result of the following code fragment?
#include <iostream>
using namespace std;
int main()
{
    bool p = false;
    bool q = false;
    bool r = true;
    cout << (p == q == r);
    /*
    Output is:
    1
    reason:
    b/c (p == q) = true;
    (true = r) = true;
    */
    return 0;
}
