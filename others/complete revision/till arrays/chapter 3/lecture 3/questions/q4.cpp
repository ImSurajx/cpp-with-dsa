/*
Ques : Print the given pattern
                  * 
                * * * 
              * * * * * 
            * * * * * * * 
          * * * * * * * * * 
        * * * * * * * * * * * 
      * * * * * * * * * * * * * 
    * * * * * * * * * * * * * * * 
  * * * * * * * * * * * * * * * * * 
* * * * * * * * * * * * * * * * * * * 
  * * * * * * * * * * * * * * * * * 
    * * * * * * * * * * * * * * * 
      * * * * * * * * * * * * * 
        * * * * * * * * * * * 
          * * * * * * * * * 
            * * * * * * * 
              * * * * * 
                * * * 
                  * 
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    int nsp = n-1;
    int nst = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            cout<<"  ";
        }
        for (int k = 1; k <= nst; k++)
        {
            cout<<"* ";
        }
        nsp--;
        nst+=2;
        cout<<endl;    
    }
    int nsp2 = 1;
    int nst2 = (n * 2) - 3;
    for (int i = 1; i <= n-1; i++)
    {
        for (int j = 1; j <= nsp2; j++)
        {
            cout<<"  ";
        }
        for (int k = 1; k <= nst2; k++)
        {
            cout<<"* ";
        }
        nsp2++;
        nst2-=2;
        cout<<endl;  
    }
    
    
    return 0;
}