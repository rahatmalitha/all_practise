#include <iostream>
#include <climits>
using namespace std;

int reverseArray(int arr[], int size)
{
    int start = 0, end = size - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    return 0;
}

int main()
{
    int size = 7;
    int arr[size] = {4, 7, 1, 8, 2, 6, 3};

    reverseArray(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}