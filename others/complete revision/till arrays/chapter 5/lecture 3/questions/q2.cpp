/*
Ques : Move all negative numbers to beginning and
positive to end with constant extra space.
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

// method 2: two pointer
void sortm2(vector<int> &nums)
{
    int i = 0;
    int j = nums.size() - 1;
    while (i <= j)
    {
        if (nums[i] < 0)
        {
            i++;
        }
        else if (nums[j] > 0)
        {
            j--;
        }
        else if (nums[i] > 0 && nums[j] < 0)
        {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            i++;
            j--;
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