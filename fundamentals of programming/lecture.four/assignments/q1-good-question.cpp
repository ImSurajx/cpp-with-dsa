/*
Write a program to count the minimum number of notes in a given amount using the switch statement.
Input 1: 510
Output1 : notes of “500” = 1 and notes of “10” = 1
*/
#include<iostream>
using namespace std;
int main(){
    // initilization
    int amount, n2000, n500, n200, n100, n50, n20, n10, n5, n2; 
    n2000 = n500 = n200 = n100 = n50 = n20 = n10 = n5 = n2 = 0;
    //  taking input;
    cout<<"enter amount: ";
    cin>>amount;
    // number of notes calculator.
    switch(1){
        case 1: // for 2000
        n2000 = amount / 2000;
        amount %= 2000;
        
        case 2: // for 500
        n500 = amount / 500;
        amount %= 500;

        case 3: // for 200
        n200 = amount / 200;
        amount %= 200;

        case 4: // for 100
        n100 = amount / 100;
        amount %= 100;

        case 5: // for 50
        n50 = amount / 50;
        amount %= 50;

        case 6: // for 20
        n20 = amount / 20;
        amount %= 20;

        case 7: // for 10
        n10 = amount / 10;
        amount %= 10;

        case 8: // for 5
        n5 = amount / 5;
        amount %= 5;

        case 9: // for 2
        n2 = amount / 2;
        amount %= 2;
        break;
    }
    // give output.
    cout<<"Note of 2000: "<<n2000<<endl;
    cout<<"Note of 500: "<<n500<<endl;
    cout<<"Note of 200: "<<n200<<endl;
    cout<<"Note of 100: "<<n100<<endl;
    cout<<"Note of 50: "<<n50<<endl;
    cout<<"Note of 20: "<<n20<<endl;
    cout<<"Note of 10: "<<n10<<endl;
    cout<<"Note of 5: "<<n5<<endl;
    cout<<"Note of 2: "<<n2<<endl;
    return 0;
}