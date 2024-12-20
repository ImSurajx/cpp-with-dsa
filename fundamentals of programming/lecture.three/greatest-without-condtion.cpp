// q10. take 3 positive integers input and print the greatest of them.
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter first number: ";
    cin >> a;
    cout << "enter second number: ";
    cin >> b;
    cout << "enter third number: ";
    cin >> c;
    // my code
    // if (a > b)
    // {
    //     if (a > c)
    //     {
    //         cout <<a<< " is greatest." << endl;
    //     }
    // }
    // if (b > a)
    // {
    //     if (b > c)
    //     {
    //         cout << b << " is greatest" << endl;
    //     }
    // }
    // if (c > a)
    // {
    //     if (c > b)
    //     {
    //         cout<< c << "is greatest" << endl;
    //     }
    // }

    if(a>b)
    {
        if(a>c)
        {
            cout<<a<<" is greatest."; 
        }
        else // a<c
        {
            cout<<c<<" is greatest.";
        }
    }
    else // a<b
    {
        if(b>c){
            cout<<b<<" is greatest.";
        }
        else{ // b<c
            cout<<c<<" is greatest.";
        }
    }
    return 0;
}