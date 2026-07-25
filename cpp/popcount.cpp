#include <iostream>
#include <algorithm>

using namespace std;

void solve()
{
    long long n, k;
    cin >> n >> k;

    long long res = 0;

    // Greedily fill the smallest bit positions first
    while (n > 0)
    {
        // The maximum number of bits we can use at this position
        long long c = min(k, n);

        // The count of bits must match the parity of the current sum 'n'
        if (c % 2 != n % 2)
        {
            c--;
        }

        res += c;        // Add the bits we placed to our result
        n = (n - c) / 2; // Move to the next power of 2
    }

    cout << res << "\n";
}

int main()
{
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t)
    {
        while (t--)
        {
            solve();
        }
    }
    return 0;
}