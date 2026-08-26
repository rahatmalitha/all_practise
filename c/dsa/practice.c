#include <stdio.h>
int main()
{
    int n = 4;
    int a[4] = {10, 20, 30, 40};
    int index = 2;
    int element = 25;
    for (int i = 3; index > i; i--)
    {
        a[i + 1] = a[i];
    }
    a[2] = 25;
    n++;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
