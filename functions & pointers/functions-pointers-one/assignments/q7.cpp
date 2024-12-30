// explore 
/*
can the same function name be used for different function without any conflict? - no & yes both
q7.cpp:20:5: error: redefinition of 'digit'
   20 | int digit(int x)
      |     ^
q7.cpp:10:5: note: previous definition is here
   10 | int digit(int n)
      |  

The correct answer to this question is “Yes”, but only under specific conditions. Let me explain:

Function Overloading in C++

In C++, the same function name can be used for different functions without conflict if the functions differ in:
	1.	Number of parameters, or
	2.	Types of parameters, or
	3.	Order of parameters (when types differ).

This feature is called function overloading.

Example of Function Overloading:

#include <iostream>
using namespace std;

void print(int x) {
    cout << "Integer: " << x << endl;
}

void print(double x) {
    cout << "Double: " << x << endl;
}

void print(string x) {
    cout << "String: " << x << endl;
}

int main() {
    print(10);       // Calls the function with int parameter
    print(3.14);     // Calls the function with double parameter
    print("Hello");  // Calls the function with string parameter
    return 0;
}

Output:

Integer: 10
Double: 3.14
String: Hello

When It Causes a Conflict:

A conflict arises if two functions have:
	•	The same name, and
	•	The same number and types of parameters (even if they perform different tasks).

Example of a Conflict:

#include <iostream>
using namespace std;

void func(int x) {
    cout << "Function 1" << endl;
}

void func(int y) { // Error: redefinition of `func`
    cout << "Function 2" << endl;
}

int main() {
    func(10); // Which function to call? Conflict occurs.
    return 0;
}

This code will not compile because the compiler cannot differentiate between the two func functions.

Final Answer:
	•	Yes, the same function name can be used without conflict if the functions have different parameter lists (function overloading).
	•	No, if the parameter lists are identical, it will cause a conflict.

So, the correct answer depends on the context, but in most cases, C++ allows it with function overloading.   ^

*/

// write a function to count the number of digit in a number and then print the square of this number.
#include <iostream>
using namespace std;
int digit(int n)
{
    int count = 0;
    while (n > 0)
    {
        n /= 10;
        count++;
    }
    return count;
}
int digit(int x)
{
    return x * x;
}
int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;
    cout << "number of digit: " << digit(n) << endl;
    cout << "square of digit is: " << digit(digit(n)) << endl;
    return 0;
}