#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three integer numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a <= b && a <= c)
    {
        printf("The smallest number is: %d\n", a);
    }
    else if (b <= c)
    {
        printf("The smallest number is: %d\n", b);
    }
    else
    {
        printf("The smallest number is: %d\n", c);
    }
    return 0;
}
