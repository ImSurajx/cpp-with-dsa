// print the sum of series 1-2+3-4+5-6 upto n.
#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "enter a number: ";
    cin >> n;
    // for (int i = 1; i <= num; i++)
    // {
    //     // if (i % 2 != 0)
    //     // {
    //     //     sum += i;
    //     // }
    //     // else
    //     //     sum += (-i);
    // }
    /*
    if n is even -> (1-2) + (3-4) + (5-6).....((n-1)-n)
                        -1, -1, -1,-1
                    total pairs = n/2
                    so sum of paris is = n/2(-1) = -(n/2)
    if n is odd -> ((n-2)-(n-1))+n
                    sum = -(n/2)+n -- correct     !=   -n+2n/2 = n/2 --wrong
    */
   if (n%2==0){
        sum = -(n/2);
   } else sum = -(n/2)+n;
    cout << "sum of series is: " << sum << endl;
}