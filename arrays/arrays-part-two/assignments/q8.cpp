// find the error;
/*
double getAverage(int arr[], int size); // function is closing without any defination
int main(){
int balance[5] = {1000, 2, 3, 17, 50};
double avg;
avg = getAverage(balance[0], 5);
cout<<"avg value is: "<<avg<<endl;
return 0;
}

errors:
     // function is closing without any defination
    //we can't give indices as input only array is allowed
*/
//corrected code by me
// #include <iostream>
// using namespace std;
// double getAverage(int arr[], int size){
//     int sum;
//     for (int i = 0; i < size; i++)
//     {
//         sum+=arr[i];
//     }
//     return sum/size;
// }
// int main()
// {
//     int balance[5] = {1000, 2, 3, 17, 50};
//     double avg;
//     avg = getAverage(balance, 5); // second error is here we can't give indices as input only array is allowed
//     cout << "avg value is: " << avg << endl;
//     return 0;
// }
// correct code by chat gpt
#include <iostream>
using namespace std;

double getAverage(int arr[], int size) {
    int sum = 0; // Initialize sum
    for (int i = 0; i < size; i++) {
        sum += arr[i]; // Accumulate array elements
    }
    return static_cast<double>(sum) / size; // Perform floating-point division
}

int main() {
    int balance[5] = {1000, 2, 3, 17, 50};
    double avg;
    avg = getAverage(balance, 5); // Pass the array, not an element
    cout << "Avg value is: " << avg << endl;
    return 0;
}
