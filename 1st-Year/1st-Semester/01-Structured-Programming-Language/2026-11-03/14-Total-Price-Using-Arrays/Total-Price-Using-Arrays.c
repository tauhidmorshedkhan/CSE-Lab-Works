#include <stdio.h> 

int main() {
    int total = 0;
    int price[5] = {17, 23, 56, 67, 39};
    int quantity[5] = {3, 6, 2, 10, 13};
    for (int i = 0; i < 5; i++)
    {
        total += (price[i] * quantity[i]);
    }
    printf("Total price is: %d\n", total);
    return 0;
}