/*
Find the error.
*/
#include <iostream>
using namespace std;
double getAverage(int arr[], int size);
int main()
{
    int balance[5] = {1000, 2, 3, 17, 50};
    double avg;
    avg = getAverage(balance[0], 5); // balance[0] is wrong instead of this we have to use balnce
    cout << "Average value is: " << avg << endl;
    return 0;
}