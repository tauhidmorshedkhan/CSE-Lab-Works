#include <stdio.h>

int main() {
    int a, b, temp;
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);
    if (a < 1 || b < 1)
    {
        printf("Both numbers must be positive.\n");
        return 1;
    }
    printf("GCD of %d and %d is: ", a, b);
    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    printf("%d\n", a);
    return 0;
}