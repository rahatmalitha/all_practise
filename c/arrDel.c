#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 2;
    for (int i = target; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}