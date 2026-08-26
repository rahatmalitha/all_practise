#include <stdio.h>

int main()
{
    int a[10] = {10, 20, 30, 40};
    int n = 4;
    int position = 2;
    int value = 25, i;

    for (i = n; i > position; i--)
    {
        a[i] = a[i - 1];
    }
    a[position] = value;
    n++;
    printf("Array after insert\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}