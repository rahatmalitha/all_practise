#include <iostream>
#include <vector>
using namespace std;

double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> newNums;

    for (int i = 0; i < nums1.size(); i++)
    {
        newNums.push_back(nums1[i]);
    }

    for (int i = 0; i < nums2.size(); i++)
    {
        newNums.push_back(nums2[i]);
    }
    int n = newNums.size();

    for (int i = 0; i < (n - 1); i++)
    {
        for (int j = 0; j < (n - 1); j++)
        {
            if (newNums[j] > newNums[j + 1])
            {
                int temp = newNums[j];
                newNums[j] = newNums[j + 1];
                newNums[j + 1] = temp;
            }
        }
    }

    if ((n - 1) % 2 == 0)
    {
        int idx = (n - 1) / 2;
        return newNums[idx];
    }
    else
    {
        int idx = (n - 1) / 2;
        double med = (newNums[idx] + newNums[idx + 1]) / 2.0;
        return med;
    }
}

int main()
{
    vector<int> n1 = {1, 2, 5};
    vector<int> n2 = {3, 4, 7};

    double res = findMedianSortedArrays(n1, n2);
    cout << res;

    return 0;
}