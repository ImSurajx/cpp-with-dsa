/*
Ques : Write a program to create a calculator that
performs basic arithmetic operations (add,
subtract, multiply and divide) using switch case
and functions. The calculator should input two
numbers and an operator from user.
+, -, * & /
*/
#include <iostream>
using namespace std;
int main()
{
    float n1, n2;
    char ch;
    cout << "enter expression: ";
    cin >> n1 >> ch >> n2;
    switch (ch)
    {
    case '+':
        cout << "sum: " << n1 + n2 << endl;
        break;
    case '-':
        cout << "subtraction: " << n1 - n2 << endl;
        break;
    case '*':
        cout << "Multiplication: " << n1 * n2 << endl;
        break;
    case '/':
        cout << "Division: " << n1 / n2 << endl;
        break;
    default:
        break;
    }
    return 0;
}