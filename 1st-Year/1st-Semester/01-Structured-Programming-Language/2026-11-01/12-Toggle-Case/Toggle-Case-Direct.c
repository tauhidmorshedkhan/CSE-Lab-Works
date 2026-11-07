#include <stdio.h>
#include <ctype.h>

int main() {
    int ch;
    printf("Enter a letter: ");
    ch = getchar();
    if (islower(ch))
    {
        printf("The uppercase letter is: ");
        putchar(toupper(ch));
    }
    else if (isupper(ch))
    {
        printf("The lowercase letter is: ");
        putchar(tolower(ch));
    }
    else
    {
        printf("Invalid input. Please enter an alphabetic letter.\n");
        return 1;
    }
    printf("\n");
    return 0;
}