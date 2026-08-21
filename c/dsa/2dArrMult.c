#include <stdio.h>
int main()
{
    int r1, c1, r2, c2;
    printf("Enter 1st Matrix Row & Column Size: ");
    scanf("%d %d", &r1, &c1);
    int a[r1][c1];

    printf("Enter 1st Matrix %d Elements: ", r1 * c1);
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter 2nd Matrix Row & Column Size: ");
    scanf("%d %d", &r2, &c2);
    int b[r2][c2];
    printf("Enter 2nd Matrix %d Elements: ", r2 * c2);
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    if (c1 != r2)
    {
        printf("Multiplication is not possible!");
        return -1;
    }

    int c[r1][c2];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            c[i][j] = 0;
        }
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (int i = 0; i < r1; i++)
    {
        printf("|");
        for (int j = 0; j < c2; j++)
        {
            printf("%d", c[i][j]);
            if (j != c2 - 1)
            {
                printf("\t");
            }
        }
        printf("|\n");
    }

    return 0;
}
