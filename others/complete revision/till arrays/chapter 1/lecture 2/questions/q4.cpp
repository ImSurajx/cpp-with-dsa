// Ques: What is the result of the following code fragment?
/*
int main(){
    int num1;
    int p = 5, q = 10;
    p += q  -= p ;
    cout<<p<<" "<<q<<endl;
    return 0;
*/

#include <iostream>
using namespace std;
int main()
{
    int num1;
    int p = 5, q = 10;
    p += q /*  p = 10 */ -= p /* q = 5 */; // right to left --> calculation
    // p = 10, q = 5;
    cout << p << " " << q << endl;
    return 0;
}