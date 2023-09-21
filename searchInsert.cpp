#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int>& nums, int target)
{
    for (int i = 0;i < nums.size();i++)
    {
        if (nums[i] == target)
        {
            return i;
        }
    }
    for (int i = 0;i < nums.size();i++)
    {
        if (target < nums[i])
        {
            return i;
        }
    }
    int siz = nums.size();
    return siz;
}

int main()
{
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(5);
    nums.push_back(6);
    int val = 5;
    int result = searchInsert(nums, val);
    cout << result << endl;
}
