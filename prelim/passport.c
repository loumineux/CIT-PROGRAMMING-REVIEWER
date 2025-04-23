#include <stdio.h>

void showPassportMessages(int age, int hasPassport);

int main(void)
{
    int age, hasPassport;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Do you have a passport? (1/0): ");
    scanf("%d", &hasPassport);

    showPassportMessages(age, hasPassport);

    return 0;
}

void showPassportMessages(int age, int hasPassport)
{
    if (age >= 18)
    {
        if (hasPassport)
            printf("Eligible to travel\n");
        else
            printf("Apply for a passport\n");
    }
    else
    {
        if (hasPassport)
            printf("Travel with guardian\n");
        else
            printf("Not eligible to travel\n");
    }
}