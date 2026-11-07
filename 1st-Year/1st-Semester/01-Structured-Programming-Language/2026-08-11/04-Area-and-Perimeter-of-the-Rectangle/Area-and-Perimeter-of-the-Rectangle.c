#include <stdio.h>

int main() {
    float width, height, area, perimeter;
    printf("Enter Width: ");
    scanf("%f", &width);
    printf("Enter Height: ");
    scanf("%f", &height);
    area = width * height;
    perimeter = 2 * (width + height);
    printf("Area of the rectangle is %.3f\n", area);
    printf("Perimeter of the rectangle is %.3f\n", perimeter);
    return 0;
}