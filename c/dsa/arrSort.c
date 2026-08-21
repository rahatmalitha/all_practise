#include <stdio.h>
#include <stdlib.h>

// int main()
// {
//     int arr[] = {5, -1, 1, 5, 10, 2};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     for (int i = 0; i < n - 1; i++)
//     {
//         int min = i;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] < arr[min])
//             {
//                 min = j;
//             }
//         }

//         if (min != i)
//         {
//             int temp = arr[min];
//             arr[min] = arr[i];
//             arr[i] = temp;
//         }
//     }

//     printf("%d", arr[0]);

//     return 0;
// }

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {2, 6, 1, 5, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Perform bubble sort
    bubbleSort(arr, n);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}