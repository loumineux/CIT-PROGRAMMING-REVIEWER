#include <stdio.h>

void convertToCoins(int *cents, int *quarters, int *dimes, int *nickels, int *pennies);

int main(void)
{
    int cents, quarters, dimes, nickels, pennies;

    printf("Enter total coins: ");
    scanf("%d", &cents);

    convertToCoins(&cents, &quarters, &dimes, &nickels, &pennies);

    printf("Quarters: %d, Dimes: %d, Nickels: %d, Pennies: %d\n", quarters, dimes, nickels, pennies);

    return 0;
}

void convertToCoins(int *cents, int *quarters, int *dimes, int *nickels, int *pennies)
{
    *quarters = *cents / 25;
    *cents %= 25;

    *dimes = *cents / 10;
    *cents %= 10;

    *nickels = *cents / 5;
    *cents %= 5;

    *pennies = *cents;
}