#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter Row & Column Size: ");
    scanf("%d %d", &r, &c);
    int arr[r][c];
    printf("Enter %d Elements: ", r * c);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int max = arr[0][0], rIdx = 0, cIdx = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
                rIdx = i;
                cIdx = j;
            }
        }
    }
    printf("2D Array Largest Elements is Present Row [%d] & Column [%d] and Value is: %d\n", rIdx, cIdx, max);
    return 0;
}