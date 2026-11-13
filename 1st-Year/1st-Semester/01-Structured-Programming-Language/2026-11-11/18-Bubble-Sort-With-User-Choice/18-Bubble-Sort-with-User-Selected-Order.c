#include <stdio.h>

int main() {
    int n, temp, option;
    printf("Enter 1 for ascending order or 2 for descending order.\nEnter your choice: ");
    scanf("%d", &option);
    if (option != 1 && option != 2)
    {
        printf("Invalid choice: please enter 1 or 2.\n");
        return 1;
    }
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if (n < 1)
    {
        printf("Invalid input: number of elements must be at least 1.\n");
        return 1;
    }
    int values[n];
    printf("Enter %d elements separated by spaces: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &values[i]);
    }
    switch(option)
    {
        case 1:
        {
            for (int i = 0; i < n - 1; i++)
            {
                for (int j = 0; j < n - i - 1; j++)
                {
                    if (values[j] > values[j + 1])
                    {
                        temp = values[j];
                        values[j] = values[j + 1];
                        values[j + 1] = temp;
                    }
                }
            }
            printf("Sorted array in ascending order: ");
            break;
        }
        case 2:
        {
            for (int i = 0; i < n - 1; i++)
            {
                for (int j = 0; j < n - i - 1; j++)
                {
                    if (values[j] < values[j + 1])
                    {
                        temp = values[j];
                        values[j] = values[j + 1];
                        values[j + 1] = temp;
                    }
                }
            }
            printf("Sorted array in descending order: ");
            break;
        }
    } 
    for (int i = 0; i < n; i++)
    {
        printf("%d ", values[i]);
    }
    printf("\n");  
    return 0;
}