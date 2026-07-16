#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> arr, int t)
{
    vector<int> ans;
    int n = arr.size();

    int i = 0, j = n - 1;

    while (i < j)
    {
        int ps = arr[i] + arr[j];

        if (ps > t)
        {
            j--;
        }
        else if (ps < t)
        {
            i++;
        }
        else
        {
            ans.push_back(arr[i]);
            ans.push_back(arr[j]);
            return ans;
        }
    }

    return ans;
}

int main()
{
    vector<int> arr = {2, 7, 3, 11, 15};

    int target = 14;

    vector<int> res = pairSum(arr, target);
    cout << res[0] << " " << res[1] << endl;

    return 0;
}