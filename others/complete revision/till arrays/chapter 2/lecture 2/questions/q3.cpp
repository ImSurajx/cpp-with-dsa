/*
Ques : Write a program to input month number and
print total number of days in month using switch
case.
*/
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter month's number: ";
    cin >> num;
    switch (num)
    {
    case 1:
        cout << "Jan: 31 Days." << endl;
        break;
    case 2:
        cout << "Feb: 28 Days." << endl;
        break;
    case 3:
        cout << "Mar: 31 Days." << endl;
        break;
    case 4:
        cout << "Apr: 30 Days." << endl;
        break;
    case 5:
        cout << "May: 31 Days." << endl;
        break;
    case 6:
        cout << "June: 30 Days." << endl;
        break;
    case 7:
        cout << "July: 31 Days." << endl;
        break;
    case 8:
        cout << "Aug: 31 Days." << endl;
        break;
    case 9:
        cout << "Sep: 30 Days." << endl;
        break;
    case 10:
        cout << "Oct: 31 Days." << endl;
        break;
    case 11:
        cout << "Nov: 30 Days." << endl;
        break;
    case 12:
        cout << "Dec: 31 Days." << endl;
        break;
    default:
        cout << "Invalid input." << endl;
        break;
    }
    return 0;
}