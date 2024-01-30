#include <stdio.h>

int main(void){
    printf("Enter a dollar amount: ");
    int amount;
    scanf("%d", &amount);

    int twenties = amount / 20;
    int tens = (amount - twenties * 20) / 10;
    int fives = (amount - twenties * 20 - tens * 10) / 5;
    int ones = amount - twenties * 20 - tens * 10 - fives * 5;

    printf("$20 bills: %d\n", twenties);
    printf("$10 bills: %d\n", tens);
    printf("$5 bills: %d\n", fives);
    printf("$1 bills: %d\n", ones);

    return 0;
}