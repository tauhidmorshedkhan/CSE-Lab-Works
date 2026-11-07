#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, d, r1, r2, x, y;
    printf("Enter a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a == 0)
    {
        if (b == 0)
        {
            printf("No unique solution.\n");
        }  
        else
        {
            r1 = -c / b;
            printf("Linear equation. Root = %.2lf\n", r1);
        }  
    }
    else
    {
        d = b * b - 4 * a * c;

        if (d > 0)
        {
            r1 = (-b + sqrt(d)) / (2 * a);
            r2 = (-b - sqrt(d)) / (2 * a);
            printf("Real and distinct roots.\nRoot 1 = %.2lf\nRoot 2 = %.2lf\n", r1, r2);
        }
        else if (d == 0)
        {
            r1 = -b / (2 * a);
            printf("Real and equal roots.\nRoot = %.2lf\n", r1);
        }
        else
        {
            x = -b / (2 * a);
            y = sqrt(-d) / (2 * fabs(a));
            printf("Complex roots.\nRoot 1 = %.2lf + %.2lfi\nRoot 2 = %.2lf - %.2lfi\n", x, y, x, y);
        }
    }
    return 0;
}