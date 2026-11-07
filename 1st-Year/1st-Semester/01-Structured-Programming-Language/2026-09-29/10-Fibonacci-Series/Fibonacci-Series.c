#include <stdio.h>

int main()
{
    int n;
    long long a, b, c;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    if (n < 1)
    {
        printf("Invalid input: number of terms must be at least 1\n");
        return 1;
    }
    else if (n == 1)
    {
        printf("Enter first term: ");
        scanf("%lld", &a);
        printf("Fibonacci Series is: %lld\n", a);
    }
    else
    {
        printf("Enter first term: ");
        scanf("%lld", &a);
        printf("Enter second term: ");
        scanf("%lld", &b);
        printf("Fibonacci Series is: %lld %lld", a, b);
        for (int i = 3; i <= n; i++)
        {
            c = a + b;
            printf(" %lld", c);
            a = b;
            b = c;
        }
        printf("\n");
    }
    return 0;
}