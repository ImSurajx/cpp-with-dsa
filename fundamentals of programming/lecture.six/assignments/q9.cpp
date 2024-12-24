/*
Write a program to print out all Armstrong numbers between 1 and 500. If the sum of cubes of
each digit of the number is equal to the number itself, then the number is called an Armstrong
number. For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 )
*/
#include<iostream>
using namespace std;
int main(){
    // cout<<"enter a number: ";
    // int num, digit, store = 0, store_t = 0, store_th = 0;
    // cin>>num;
    // int a = num;
    // digit = num % 10;
    // store_th += digit;
    // num /= 10;

    // digit = num % 10;
    // store_t += digit;
    // num /= 10;

    // digit = num % 10;
    // store += digit;
    // num /= 10;
    // if((store * store * store) + (store_t * store_t * store_t) + (store_th * store_th * store_th) == (a) ) cout<<"Armstrong Number: "<<a<<endl;
    // else cout<<"invalid input."<<endl;

    // taked help of chatgpt
    cout << "Armstrong numbers between 1 and 500 are:\n";

    for (int num = 1; num <= 500; num++) {
        int a = num; // Store the original number
        int digit, store = 0;

        // Calculate the sum of the cubes of the digits
        while (a > 0) {
            digit = a % 10;
            store += digit * digit * digit;
            a /= 10;
        }

        // Check if the number is an Armstrong number
        if (store == num) {
            cout << num << " ";
        }
    }
        return 0;
    }
