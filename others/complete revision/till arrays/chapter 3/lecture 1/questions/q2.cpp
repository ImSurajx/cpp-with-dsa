/*
Ques : WAP to print odd numbers from 1 to
100.
*/
#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            continue; // when i % 2 == 0 it's will skip that itration
        }
        else
        {
            cout << i << endl;
        }
    }

    return 0;
}