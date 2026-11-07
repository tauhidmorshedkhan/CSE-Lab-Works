#include <stdio.h>

int main() {
    int n;
    double fact = 1.0, sum = 0.0;
    printf("Enter an integer number: ");
    scanf("%d", &n);
    if (n < 1) 
    {
        printf("Invalid input. n must be a positive integer.\n");
        return 1;
    }
    for (int i = 1; i <= n; i++) 
    {
        fact = fact * i;
        sum = sum + (i / fact);
    }
    printf("The sum is: %.3lf\n", sum);
    return 0;
}