#include <stdio.h>

int main() {
    int arr[5], sum = 0, max;
    float avg;
    printf("Please enter 5 integers: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    printf("The numbers are: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%-4d", arr[i]);
    }
    printf("\n");
    printf("Sum of those numbers is: %d\n", sum);
    avg = sum / 5.0;
    printf("Average of those numbers is: %.2f\n", avg);
    max = arr[0];
    for (int i = 1; i < 5; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("Maximum number among them is: %d\n", max);
    return 0;
}