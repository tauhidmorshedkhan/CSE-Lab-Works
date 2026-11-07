#include <stdio.h>

int main() {
    int a, b, c, min;
    printf("Enter three integer numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a <= b && a <= c)
    {
        min = a;
    }
    else if (b <= c)
    {
        min = b;
    }
    else
    {
        min = c;
    }
    printf("The smallest number is: %d\n", min);
    return 0;
}
