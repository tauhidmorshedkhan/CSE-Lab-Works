#include <stdio.h>
#include <string.h>

int main() {
    char first[10], middle[10], last[10], full_name[30];
    printf("Enter your first name: ");
    scanf("%9s", first);
    printf("Enter your middle name: ");
    scanf("%9s", middle);
    printf("Enter your last name: ");
    scanf("%9s", last);
    strcpy(full_name, first);
    strcat(full_name, " ");
    strcat(full_name, middle);
    strcat(full_name, " ");
    strcat(full_name, last);
    printf("Your full name is: %s\n", full_name);
    return 0;
}