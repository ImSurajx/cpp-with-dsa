/*
Ques : Sort the array of 0’s , 1’s and 2’s
*/
#include <iostream>
#include <vector>
using namespace std;

void input(vector<int> &nums, int n)
{
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
}
void display(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
}

// method 1: counting.
void sortm1(vector<int> &nums)
{
    int n = nums.size();
    int noo = 0, noz = 0, noot = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
        {
            noz++;
        }
        else if (nums[i] == 1)
        {
            noo++;
        }
        else
        {

            noot++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i < noz)
        {
            nums[i] = 0;
        }
        else if (i < noz + noo)
        {
            nums[i] = 1;
        }
        else
        {
            nums[i] = 2;
        }
    }
}

// method 2: dutch flag algorithm
void sortm2(vector<int> &nums)
{
    int low = 0;
    int mid = 0;
    int hig = nums.size() - 1;
    while (mid <= hig)
    {
        if (nums[mid] == 0)
        {
            int temp = nums[mid];
            nums[mid] = nums[low];
            nums[low] = temp;
            low++;
            mid++;
        }
        else if (nums[mid] == 2)
        {
            int temp = nums[mid];
            nums[mid] = nums[hig];
            nums[hig] = temp;
            hig--;
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
    }
}

int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;
    vector<int> nums;
    cout << "enter elements of array: ";
    input(nums, n);
    cout << "current elements of array: ";
    display(nums);
    cout << endl;
    sortm2(nums);
    cout << "sorted array is: ";
    display(nums);
    cout << endl;
}