#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v(5, 7); // vector is initilized with the size of 5 & capacity of 5, each elemet of vector is 7 if we didn't declare 7 then it's by default value is '0'.
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    cout << "size is: " << v.size() << endl;
    cout << "capacity is: " << v.capacity() << endl;
    return 0;
}
