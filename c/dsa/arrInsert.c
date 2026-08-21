#include <stdio.h>
int main()
{
    int n = 1, i, element = 25;
    int a[5] = {10, 20, 30, 40};
    int aNextEl = a[n + 1];
    for (int i = 2; i < 4; i++)
    {
        int aNextTwoEl = aNextEl;
        aNextEl = a[n + 2];
        a[i + 1] = aNextTwoEl;
        n++;
    }
    a[2] = element;
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}