#include <stdio.h>
double func(double x)
{
    return x * x * x - x - 1;
}

double func_(double x)
{
    return 3 * x * x - 1;
}
void raphsons(double a, double b, int max_iter)
{
    if (func(a) * func(b) >= 0)
    {
        printf("Invalid interval. The function must have opposite signs at a and b.\n");
        return;
    }

    double x0 = (a + b) / 2;

    double x1;
    int iter = 0;

    printf("Iter\t  x0\t\t  f(x0)\t\t  f'(x0)\t  x1\t\t  f(x1)\n");
    printf("---------------------------------------------------------------------------------------------\n");

    while (iter < max_iter)
    {
        x1 = x0 - (func(x0) / func_(x0));
        printf("%3d\t%lf\t%lf\t%lf\t%lf\t%lf\n", iter + 1, x0, func(x0), func_(x0), x1, func(x1));

        if (func(x1) == 0.0)
        {
            break;
        }
        else
        {
            x0 = x1;
        }
        iter++;
    }

    ("---------------------------------------------------------------------------------------------\n");
    printf("Approximate root after %d iterations: x = %.6f\n", iter, x1);
}

int main()
{
    double a, b;
    int max_iterations;
    printf("Enter the interval [a, b]: ");
    scanf("%lf %lf", &a, &b);
    printf("Enter the number of iterations: ");
    scanf("%d", &max_iterations);
    raphsons(a, b, max_iterations);

    return 0;
}