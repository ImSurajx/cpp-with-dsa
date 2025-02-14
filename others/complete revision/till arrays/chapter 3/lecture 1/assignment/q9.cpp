/*
Write a program to print out all Armstrong numbers between 1 and 500. If the sum of cubes of
each digit of the number is equal to the number itself, then the number is called an Armstrong
number. For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 )
*/
#include <iostream>
using namespace std;
int main()
{
    /*
    Algorithm:
    > initlize three variables:
        digit -> contain last digit of number.
        sum  -> store sum of cubes of digit.
        num -> store value of i inside loop.
    > create a for loop from (1 to 500)
    > create another loop inside for loop which calculate the cube of each digit & add it into sum till the num become 0.
    > check wheater sum is equal to i or not if yes then print the digit else do nothing.
    */
    int digit, sum;
    for (int i = 1; i <= 500; i++)
    {
        sum = 0;
        for (int j = i; j > 0; j /= 10) // j = 1 153 15 1
        {
            digit = j % 10;                 // 1 3 5 1
            sum += (digit * digit * digit); // 1 27 125 1
        }
        if (sum == i)
        {
            cout << "Armstrong Number: " << sum << endl;
        }
    }

    return 0;
}