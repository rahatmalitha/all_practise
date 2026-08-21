#include <stdio.h>

double func(double x)
{
    return x * x * x - x - 1;
}

void secantMethod(double x0, double x1, int max_iter)
{
    if (func(x0) * func(x1) >= 0)
    {
        printf("Invalid interval. The function must have opposite signs at a and b.\n");
        return;
    }

    double x2;
    int iter = 0;

    printf("Iter\t  x0\t\t   x1\t\t   x2\t\t   f(x2)\n");
    printf("--------------------------------------------------------------------\n");

    while (iter < max_iter)
    {
        x2 = ((x0 * func(x1)) - (x1 * func(x0))) / (func(x1) - func(x0));
        printf("%3d\t%lf\t%lf\t%lf\t%lf\n", iter + 1, x0, x1, x2, func(x2));

        if (func(x2) == 0.0)
        {
            break;
        }
        else
        {
            x0 = x1;
            x1 = x2;
        }
        iter++;
    }

    printf("--------------------------------------------------------------------\n");
    printf("Approximate root after %d iterations: x = %.6f\n", iter, x2);
}

int main()
{
    double x0, x1;
    int max_iterations;
    printf("Enter the interval [x0, x1]: ");
    scanf("%lf %lf", &x0, &x1);
    printf("Enter the number of iterations: ");
    scanf("%d", &max_iterations);
    secantMethod(x0, x1, max_iterations);

    return 0;
}