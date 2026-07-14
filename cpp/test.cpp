#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a;
        cin >> a;
        for (int i = a; i >= 1; i--)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}