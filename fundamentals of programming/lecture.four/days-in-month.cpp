// q2. write a program to input month number and print total number of days in  month using switch case:
#include <iostream>
using namespace std;
int main()
{
    int month;
    cout << "enter month number: ";
    cin >> month;
    switch (month)
    {
    case 1:
        cout << "Jan: 31 Days.";
        break;
    case 2:
        cout << "Feb: 28 Days.";
        break;
    case 3:
        cout << "Mar: 31 Days.";
        break;
    case 4:
        cout << "April: 30 Days.";
        break;
    case 5:
        cout << "May: 31 Days.";
        break;
    case 6:
        cout << "June: 30 Days.";
        break;
    case 7:
        cout << "July: 31 Days.";
        break;
    case 8:
        cout << "Aug: 31 Days.";
        break;
    case 9:
        cout << "Sep: 30 Days.";
        break;
    case 10:
        cout << "Oct: 31 Days.";
        break;
    case 11:
        cout << "Nov: 30 Days.";
        break;
    case 12:
        cout << "Dec: 31 Days.";
        break;
    default:
        cout << "invalid input";
        break;
    }
    return 0;
}