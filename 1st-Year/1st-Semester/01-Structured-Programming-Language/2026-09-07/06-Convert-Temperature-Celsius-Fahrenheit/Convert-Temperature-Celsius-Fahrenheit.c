#include <stdio.h>
 
int main() {
    float Celsius, Fahrenheit;
    char menu;
    printf("Press c for Fahrenheit to Celsius\nPress f for Celsius to Fahrenheit\n");
    scanf("%c", &menu);
    switch (menu) {
        case 'c':
        {
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &Fahrenheit);
            Celsius = (Fahrenheit - 32) * (5.0 / 9.0);
            printf("Temperature in Celsius is %.2f C\n", Celsius);
            break;
        }
        case 'f':
        {
            printf("Enter temperature in Celsius: ");
            scanf("%f", &Celsius);
            Fahrenheit = (Celsius * (9.0 / 5.0)) + 32;
            printf("Temperature in Fahrenheit is %.2f F\n", Fahrenheit);
            break;
        }
        default:
        {
            printf("Invalid choice\n");
            break;
        }
    }
    return 0;
}