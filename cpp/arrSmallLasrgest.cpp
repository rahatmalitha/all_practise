#include <iostream>
#include <climits>
using namespace std;

int arrSmLg(int arr[], int n)
{
    int maxVal = INT_MIN, minVal = INT_MAX, maxIdx = 0, minIdx = 0;
    for (int i = 0; i < n; i++)
    {
        if (maxVal < arr[i])
        {
            maxVal = arr[i];
            maxIdx = i;
        }
        if (minVal > arr[i])
        {
            minVal = arr[i];
            minIdx = i;
        }
    }
    cout << "Max  = " << maxIdx << endl;
    cout << "Min  = " << minIdx << endl;
    return 0;
}

int main()
{
    int size = 7;
    int arr[size] = {4, 7, 1, 8, 2, -6, 3};

    arrSmLg(arr, size);

    return 0;
}