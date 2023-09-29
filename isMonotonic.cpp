#include <iostream>
#include <vector>
using namespace std;

bool isMonotonic(vector<int>& nums)
{
    bool increasing = true;
    bool decreasing = true;

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] < nums[i - 1]) {
            increasing = false;
        }
        if (nums[i] > nums[i - 1]) {
            decreasing = false;
        }
    }

    return increasing || decreasing;
}


int main()
{
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(0);
    // nums.push_back(9);
    
    bool check = isMonotonic(nums);
    if (check == true)
        cout << "treu";
    else
        cout << "false";
}