#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main()
{
    int t, n;

    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n, greater<int>());

        int x = 0, y = 1, z = 0;
        int rem = arr[x] % arr[y];
        bool valid = false;

        if (n == 2)
        {
            if (rem == z)
            {
                valid = true;
            }
            else if (arr[y] > 0)
            {
                valid = true;
            }
            else
            {
                valid = false;
            }
        }
        else
        {
            for (int i = 2; i < n; i++)
            {
                z = arr[i];
                rem = arr[x] % arr[y];
                if (z == rem)
                {
                    valid = true;
                    x += 1;
                    y += 1;
                }
                else
                {
                    valid = false;
                    break;
                }
            }
        }

        if (valid)
        {
            cout << arr[0] << " " << arr[1] << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}