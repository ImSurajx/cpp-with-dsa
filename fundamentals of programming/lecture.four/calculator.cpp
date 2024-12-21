// wap to create a calculator that performs basic arithmetic operations (add, subtract, multiply and divide) using switch case and functions. the calculator should input two numbers and an operator from user.
#include <iostream>
using namespace std;
int main()
{
    int num_one, num_two;
    char ch;
    cout << "enter first number: ";
    cin >> num_one;
    cout << "enter operator (+,-,*,/): ";
    cin >> ch;
    cout << "enter second number: ";
    cin >> num_two;
    switch (ch == '+')
    {
    case 1:
        cout << num_one + num_two;
        break;
    default:
        break;
    }
    switch (ch == '-')
    {
    case 1:
        if (num_one >= num_two)
            cout << num_one - num_two;
        else
            num_two - num_one;
        break;
    default:
        break;
    }
    switch (ch == '*')
    {
    case 3:
        cout << num_one * num_two;
        break;

    default:
        break;
    }
    switch (ch == '/')
    {
    case 4:
        if (num_one >= num_two)
            cout << num_one / num_two;
        else
            num_two / num_one;
    default:
        break;
    }
    return 0;
}