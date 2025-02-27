/*
Q3: Given a matrix ‘A’ of dimension n x m and 2 coordinates (l1, r1) and (l2, r2). Return the sum of the
rectangle from (l1,r1) to (l2, r2).
Input 1:
1 2 -3 4
0 0 -4 2
1 -1 2 3
-4 -5 -7 0

l1 = 1, r1 = 2 , l2 = 3 , r2 = 3

Output 1: -4
Input 2:
1 2 -3 4
0 0 -4 2
1 -1 2 3
-4 -5 -7 0

l1 = 1, r1 = 0 , l2 = 0 , r2 = 3
Output 1: 2
*/
#include<iostream>
using namespace std;
int main(){
    int m, n;
    cout<<"cout row & columns of array: ";
    cin>>m>>n;
    int arr[m][n];
    // taking input in first array;
    cout<<"enter elements of array: ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    int l1, r1, l2, r2;
    cout<<"enter values of l1, r1, l2, r2: ";
    cin>>l1>>r1>>l2>>r2;
    int sum = 0;
    for (int i = l1; i <= l2; i++)
    {
        for (int j = r1; j <= r2; j++)
        {
            sum+= arr[i][j];
        }
        
    }
    cout<<"sum is: "<<sum<<endl;
    return 0;
}