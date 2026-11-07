#include<stdio.h>

int main()
{
    int n, i, fact = 1;
    scanf("%d", &n);
    for(i = n; i >= 1; i--)
    {
        fact = fact * i;
    }
    printf("The Factorial is %d\n", fact);
    return 0;
}