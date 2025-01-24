// Find the factorial of a large number:
#include<iostream>
using namespace std;

vector<int> factorial(int n){
    vector<int>result;
    result.push_back(1);
    for (int x = 2; x <= n; x++)
    {
        int carry = 0;
        for (int i = 0; i < result.size(); i++)
        {
            int value = result[i] * x + carry;
            result[i] = value%10;
            carry = value/10;
        }
        while(carry!=0){
            result.push_back(carry%10);
            carry /= 10;
        }
    }
    reverse(result.begin(), result.end());
    return result;
}
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    vector<int>fact = factorial(n);
    for (int i = 0; i < fact.size(); i++)
    {
        cout<<fact[i];
    }
    cout<<endl;
    return 0;
}