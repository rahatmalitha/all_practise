#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int s = 0, e = n - 1, target = 5;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == target)
        {
            s = mid + 1;
        }
        else if (arr[mid] > target)
        {
            s = mid - 1;
        }
        else
        {
            cout << mid;
        }
    }

    return 0;
}