#include <stdio.h>
int main()
{
    int r, c, mult = 1;
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
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            mult *= arr[i][j];
        }
    }
    printf("2D Array multiplication of all elements = %d\n", mult);
    return 0;
}