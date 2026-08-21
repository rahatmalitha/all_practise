#include <stdio.h>

double func(double x)
{
    return x * x * x - x - 1;
}

void bisection(double a, double b, int max_iter)
{
    if (func(a) * func(b) >= 0)
    {
        printf("Invalid interval. The function must have opposite signs at a and b.\n");
        return;
    }

    double c;
    int iter = 0;

    printf("Iter\t  a\t\t   b\t\t   c\t\t   f(c)\n");
    printf("--------------------------------------------------------------------\n");

    while (iter < max_iter)
    {
        c = (a + b) / 2;
        printf("%3d\t%lf\t%lf\t%lf\t%lf\n", iter + 1, a, b, c, func(c));

        if (func(c) == 0.0)
        {
            break;
        }
        else if (func(c) * func(a) < 0)
        {
            b = c;
        }
        else
        {
            a = c;
        }
        iter++;
    }

    printf("--------------------------------------------------------------------\n");
    printf("Approximate root after %d iterations: x = %.6f\n", iter, c);
}

int main()
{
    double a, b;
    int max_iterations;
    printf("Enter the interval [a, b]: ");
    scanf("%lf %lf", &a, &b);
    printf("Enter the number of iterations: ");
    scanf("%d", &max_iterations);
    bisection(a, b, max_iterations);

    return 0;
}