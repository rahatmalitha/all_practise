#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t, n, k, maxSum = 0, count = 0;

    cin >> t;
    while (t--)
    {
        cin >> n >> k;

        for (int i = 1; i <= n; i++)
        {
            for (int j = n - i; j <= k; j++)
            {
                cout << i;
                n--;
            }
        }
        cout << maxSum;
    }

    return 0;
}