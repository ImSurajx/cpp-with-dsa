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

Output will be:
it will print character '1' or integer value of '1' = 49 it. 
*/

#include<iostream>
using namespace std;
int main(){
int test = 0;
cout << "First character " << '1' << endl;
cout << "Second character " << (test ? 3 : '1') << endl; // becuz test value is a integer so ternnary operator also treat that charcter as interger
return 0;
}