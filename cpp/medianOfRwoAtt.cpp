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

    for (int i = 0; i < newNums.size(); i++)
    {
        for (int j = 1; j < newNums.size(); j++)
        {
            if (newNums[i] > newNums[j])
            {
                newNums[i] = newNums[j];
            }
        }
    }

    for (int i = 0; i < newNums.size(); i++)
    {
        cout << newNums[i];
    }

    return 0;
}