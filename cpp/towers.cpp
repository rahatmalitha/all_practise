#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, d;
        cin >> n >> m >> d;

        int x = d / m + 1;
        int res;

        if (n % x == 0)
        {
            res = n / x;
        }
        else
        {
            res = n / x + 1;
        }
        cout << res << endl;
    }
}