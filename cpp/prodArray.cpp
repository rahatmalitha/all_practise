#include <iostream>
#include <vector>
using namespace std;

vector<int> prodArray(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans(n, 1);
    for (int i = 0; i < n; i++)
    {
        int prod = 1;
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                prod *= nums[j];
            }
        }
        ans[i] = prod;
    }

    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4};
    vector<int> res = prodArray(nums);

    cout << res[0];
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i];
    }
    return 0;
}