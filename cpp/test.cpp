#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> vec;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                vec.push_back(i);
                vec.push_back(j);
            }
        }
    }

    return vec;
}

int main()
{
    vector<int> nums = {2, 7, 11, 13, 15};
    int target = 15;

    vector<int> res = twoSum(nums, target);

    cout << res[0] << res[1];

    return 0;
}