#include <stdio.h>

int main() {
    int i, search, position = 0;
    int value[5];
    printf("Enter 5 integers: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &value[i]);
    }
    printf("Enter the number to search: ");
    scanf("%d", &search);
    for (i = 0; i < 5; i++)
    {
        if (search == value[i])
        {
            position = i + 1;
            printf("Number found at position %d\n", position);
            break;
        }
    }
    if (position == 0)
        {
            printf("Number not found in the array.\n");
        }
    return 0;
}