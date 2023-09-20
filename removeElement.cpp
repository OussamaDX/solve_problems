#include <iostream>
#include <vector>
using namespace std;

int removeElement(vector<int>& nums, int val)
{
    int k = 0;
    int count = 0;
    for (size_t i = 0; i < nums.size(); i++)
    {
        if (nums[i] != val)
        {
            nums[count] = nums[i];
            count++;
        }
    }
    nums.resize(count);
    return count;
}

int main()
{
    vector<int> nums;
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(3);
    int val = 3;
    int result = removeElement(nums, val);
    cout << result << endl;
}
