#include <stdio.h>

int main() {
    int number, digit, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    if (number < 1)
    {
        printf("The number must be positive.\n");
        return 1;
    }
    printf("Digits in reverse order: ");
    while (number != 0)
    {
        digit = number % 10;
        printf("%d", digit);
        sum += digit;
        number /= 10;
    }
    printf("\nThe sum of the digits is: %d\n", sum);
    return 0;
}