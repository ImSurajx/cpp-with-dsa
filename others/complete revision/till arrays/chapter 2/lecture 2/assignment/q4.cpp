/*
predict the output:
#include<iostream>
using namespace std;
int main(){
int test = 0;
cout << "First character " << '1' << endl;
cout << "Second character " << (test ? 3 : '1') << endl;
return 0;
}
*/
#include <iostream>
using namespace std;
int main()
{
    int test = 0;
    cout << "First character " << '1' << endl; // this will remain same.
    cout << "Second character " << (test ? 3 : '1') << endl; // 49 (ternary covert char into integer).
    return 0;
}