/*
Ques : WAP to check if a number is prime or
not.
*/
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter a number: ";
    cin >> num;
    bool flag = false;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            flag = true;
            break;
        }
    }
    if (flag == true)
    {
        cout << num << " is a composite number" << endl;
    }
    else
    {
        cout << num << " is a prime number" << endl;
    }

    return 0;
}