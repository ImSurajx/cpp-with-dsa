/*
Ques : Trapping Rain Water
*/
#include <iostream>
#include <cmath>
using namespace std;

int trap(vector<int> &height)
{
    int n = height.size();
    int prev[n];
    prev[0] = -1;
    int max = height[0];
    for (int i = 1; i < n; i++)
    {
        prev[i] = max;
        if (max < height[i])
        {
            max = height[i];
        }
    }

    int next[n];
    next[n - 1] = -1;
    max = height[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        next[i] = max;
        if (max < height[i])
            max = height[i];
    }

    for (int i = 0; i < n; i++)
    {
        prev[i] = min(prev[i], next[i]);
    }

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
    height.push_back(0);
    height.push_back(1);
    height.push_back(0);
    height.push_back(2);
    height.push_back(1);
    height.push_back(0);
    height.push_back(1);
    height.push_back(3);
    height.push_back(2);
    height.push_back(1);
    height.push_back(2);
    height.push_back(1);
    cout << "elements: ";
    for (int i = 0; i < height.size(); i++)
    {
        cout << height[i] << " ";
    }
    cout << endl;
    cout << "traped water: " << trap(height) << endl;
    return 0;
}