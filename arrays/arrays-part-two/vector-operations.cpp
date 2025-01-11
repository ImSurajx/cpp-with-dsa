#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;  // you not need to mention size of vector
    v.push_back(6); // inserting elements into vector.
    v.push_back(8);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(6);
    v.push_back(8);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(6);
    v.push_back(8);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(6);
    v.push_back(8);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    cout << "size is: " << v.size() << endl;
    cout << "capacity is: " << v.capacity() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    v.pop_back(); // last element will be removed.
    v.pop_back(); // note: size will change but capacity never.
    cout << endl;
    cout << "size is: " << v.size() << endl;
    cout << "capacity is: " << v.capacity() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}