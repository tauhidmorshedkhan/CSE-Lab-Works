#include <stdio.h>
 
int main(){
    float pi = 3.1416, area, perimeter, radius; 
    printf("Enter the radius of the circle: "); 
    scanf("%f", &radius);
    area = pi * (radius * radius); 
    perimeter = 2 * (pi * radius);
    printf("The area of the circle is %.3f\n", area); 
    printf("The perimeter of the circle is %.3f\n", perimeter);
    return 0;
}