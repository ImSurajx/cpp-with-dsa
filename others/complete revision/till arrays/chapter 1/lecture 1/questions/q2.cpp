// Example : Calculating percentage of 5 subjects
#include <iostream>
using namespace std;
int main()
{
    float a, b, c, d, e;
    cout << "enter marks of each subject: ";
    cin >> a >> b >> c >> d >> e;
    cout << "percentage of 5 subject will be: " << (a + b + c + d + e) / 5<<"%"<<endl;
    return 0;
}