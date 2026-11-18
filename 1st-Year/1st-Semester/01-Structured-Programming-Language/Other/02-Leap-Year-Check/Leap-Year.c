#include <stdio.h>

int main() {
    int year;
    printf("Enter a year (must be a positive integer): ");
    scanf("%d", &year);
    if (year < 1)
    {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        printf("%d is a leap year.\n", year);
    }
    else
    {
        printf("%d is not a leap year.\n", year);
    }
    return 0;
}