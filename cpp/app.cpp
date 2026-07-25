#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int x, y;

    while (t--)
    {
        cin >> x;
        cin >> y;
        if (x % y == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}