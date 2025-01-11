#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;                // you not need to mention size of vector
    v.push_back(6);               // inserting elements into vector.
    cout << v.capacity() << endl; // for knowing the capacity of vector.
    cout << v.size() << endl;     // for knowing the size of vector
    v.push_back(8);
    cout << v.capacity() << endl; // for knowing the capacity of vector.
    cout << v.size() << endl;     // for knowing the size of vector  
    v.push_back(5);
    cout << v.capacity() << endl; // for knowing the capacity of vector.
    cout << v.size() << endl;     // for knowing the size of vector
    v.push_back(6);
    cout << v.capacity() << endl; // for knowing the capacity of  vector.
    cout << v.size() << endl;     // for knowing the size of vector
    v.push_back(7);
    cout << v.capacity() << endl; // for knowing the capacity of vector.
    cout << v.size() << endl;     // for knowing the size of vector
    return 0;
}