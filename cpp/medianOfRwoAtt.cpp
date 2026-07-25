#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> n1 = {1, 2, 5};
    vector<int> n2 = {3, 4, 7};

    vector<int> newNums;

    for (int i = 0; i < n1.size(); i++)
    {
        newNums.push_back(n1[i]);
    }

    for (int i = 0; i < n2.size(); i++)
    {
        newNums.push_back(n2[i]);
    }

    int lp = 0, rp = (newNums.size()) - 1, temp = 0;
    while (lp < rp)
    {
        if (newNums[lp] > newNums[rp])
        {
            temp = newNums[lp];
            newNums[lp] = newNums[rp];
            newNums[rp] = temp;
        }

        newNums[lp] > newNums[rp] ? lp++ : rp--;
    }

    for (int i = 0; i < newNums.size(); i++)
    {
        cout << newNums[i];
    }

    return 0;
}