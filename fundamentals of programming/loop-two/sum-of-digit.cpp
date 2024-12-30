// sum of digit
#include <iostream>
using namespace std;
int main()
{
    int n, digit, sum = 0;
    cout << "enter a number: ";
    cin >> n;
    // cout<<n<<endl;
    // digit = n%10; // for getting the digit.
    // sum+=digit;
    // n /=10; // for decresing the number.
    // cout<<n<<endl;
    // cout<<digit<<endl;
    // cout<<sum<<endl;

    // digit = n%10; // for getting the digit.
    // sum+=digit;
    // n /=10; // for decresing the number.
    // cout<<n<<endl;
    // cout<<digit<<endl;
    // cout<<sum<<endl;
    while (n > 0)
    {
        digit = n % 10;
        sum += digit;
        n /= 10;
    }
    cout << "sum of digit: " << sum << endl;

    return 0;
}