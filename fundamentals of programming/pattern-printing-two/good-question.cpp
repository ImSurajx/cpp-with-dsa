/*
4 4 4 4 4 4 4 
4 3 3 3 3 3 4 
4 3 2 2 2 3 4 
4 3 2 1 2 3 4 
4 3 2 2 2 3 4 
4 3 3 3 3 3 4 
4 4 4 4 4 4 4 
*/
// we will solve this question in part.

/*
step 1: printing min value b/w i, j using using pseudo variables.
1 1 1 1 1 1 1 
1 2 2 2 2 2 2 
1 2 3 3 3 3 3 
1 2 3 4 4 4 4 
1 2 3 4 5 5 5 
1 2 3 4 5 6 6 
1 2 3 4 5 6 7 

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n; // taking input;
    for(int i = 1; i <= (n*2) - 1; i++) // outer loop is runnig (n*2) - 1 times, like if input is 4 the outer loop will run 4*2-1 = 7 times.
    {
        for(int j = 1; j<= (n*2) - 1; j++) // iner loop is runnig (n*2) - 1 times, like if input is 4 the iner loop will run 4*2-1 = 7 times.
        {
            int a = i, b = j; // pseudo variable.
            cout<<min(a,b)<<" ";
        }
        cout<<endl;
    }
    return 0;
}

*/

/*
step 2: instead of printing min of i or j we modified our code to print 1,2,3 & any other digit below the value of n;
if(a>n) a = (2 * n) - i; // help to print 1,2,3 instead of i values. like if i is 5 then a = 4 * 2 - 5 = 3; 
if(b>n) b = (2 * n) - j; // help to print 1,2,3 instead of j values. life if j is 6 then b = 4 * 2 - 6 = 2;

1 1 1 1 1 1 1 
1 2 2 2 2 2 1 
1 2 3 3 3 2 1 
1 2 3 4 3 2 1 
1 2 3 3 3 2 1 
1 2 2 2 2 2 1 
1 1 1 1 1 1 1 

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n; // taking input;
    for(int i = 1; i <= (n*2) - 1; i++) // outer loop is runnig (n*2) - 1 times, like if input is 4 the outer loop will run 4*2-1 = 7 times.
    {
        for(int j = 1; j<= (n*2) - 1; j++) // iner loop is runnig (n*2) - 1 times, like if input is 4 the iner loop will run 4*2-1 = 7 times.
        {
            int a = i, b = j; // pseudo variable.
            if(a>n) a = (2 * n) - i; // help to print 1,2,3 instead of i values. like if i is 5 then a = 4 * 2 - 5 = 3; 
            if(b>n) b = (2 * n) - j; // help to print 1,2,3 instead of j values. life if j is 6 then b = 4 * 2 - 6 = 2;
            cout<<min(a,b)<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/

/*
step 3: making a equation which will help us to get the following pattern;
int x = min(a,b); // store min value of a,b;
cout<<n-x+1<<" "; // like if min value = 3, then cout will be:  4-3+1 = 4, help us to get the following pattern.
enter a number: 4
4 4 4 4 4 4 4 
4 3 3 3 3 3 4 
4 3 2 2 2 3 4 
4 3 2 1 2 3 4 
4 3 2 2 2 3 4 
4 3 3 3 3 3 4 
4 4 4 4 4 4 4 
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n; // taking input;
    for(int i = 1; i <= (n*2) - 1; i++) // outer loop is runnig (n*2) - 1 times, like if input is 4 the outer loop will run 4*2-1 = 7 times.
    {
        for(int j = 1; j<= (n*2) - 1; j++) // iner loop is runnig (n*2) - 1 times, like if input is 4 the iner loop will run 4*2-1 = 7 times.
        {
            int a = i, b = j; // pseudo variable.
            if(a>n) a = (2 * n) - i; // help to print 1,2,3 instead of i values. like if i is 5 then a = 4 * 2 - 5 = 3; 
            if(b>n) b = (2 * n) - j; // help to print 1,2,3 instead of j values. life if j is 6 then b = 4 * 2 - 6 = 2;
            int x = min(a,b); // store min value of a,b;
            cout<<n-x+1<<" "; // like if min value = 3, then cout will be:  4-3+1 = 4, help us to get the following pattern.
        }
        cout<<endl;
    }
    return 0;
}