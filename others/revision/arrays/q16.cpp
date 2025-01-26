// Question 7: Trapping Rain Water:
// Leetcode - 42:
/*
Algorithm:
Step 1: Previous Gretest Element from First Element Calculate Karke Ek Array1 Me Store Kar Do. (size = main array ka size, each element is -1)
Step 2: Next Gretest Element from First Element Calculate Karke EK Array2 Me Store Kar Do.  (size = main array ka size, each element is -1)
Step 3: Ek Array3 Banao, Jisme Min of Array1 & Array2 Stor Karo Note(first element & last element of this array is -1)
Step 4: Sum = 0, Se Start Karo Or Main Array Ko Array3 Se Minise Kar Do Also Rember Tabhi Karna Hain Jab Array3 > Main Array Se.
*/
#include <iostream>
#include <cmath>
using namespace std;
int trap(vector<int> &height)
{
   
    // correct way:
    int n = height.size();

    // prev greatest element array
    int prev[n];
    prev[0] = -1;
    int max = height[0];
    for (int i = 1; i < n; i++)
    {
        prev[i] = max;
        if (max < height[i])
            max = height[i];
    }

    // next greatest element array
    int next[n];
    next[n - 1] = -1;
    max = height[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        next[i] = max;
        if (max < height[i])
            max = height[i];
    }

    // minimum array == prev as minimum
    for (int i = 0; i < n; i++)
    {
        prev[i] = min(prev[i], next[i]);
    }

    // calculating water;
    int water = 0;
    for (int i = 1; i < n; i++)
    {
        if (height[i] < prev[i])
        {
            water += (prev[i] - height[i]);
        }
    }
    return water;
}

int main()
{
    vector<int> height;
    height.push_back(4);
    height.push_back(2);
    height.push_back(0);
    height.push_back(3);
    height.push_back(2);
    height.push_back(5);
    height.push_back(1);
    height.push_back(3);
    height.push_back(2);
    height.push_back(1);
    height.push_back(2);
    height.push_back(1);
    for (int i = 0; i < height.size(); i++)
    {
        cout << height[i] << " ";
    }
    cout << endl;
    cout <<"traped water in unit: "<< trap(height) << " ";
    return 0;
}