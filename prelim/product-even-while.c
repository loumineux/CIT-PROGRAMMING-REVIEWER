#include <stdio.h>

int prodEven(int num);

int main(void)
{
    int num, result;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    result = prodEven(num);
    printf("Product of even digits: %d\n", result);

    return 0;
}

int prodEven(int num)
{
    int rem = 0, prod = 1, found = 0;

    while (num != 0)
    {
        rem = num % 10;
        if (rem % 2 == 0)
        {
            prod *= rem;
            found = 1;
        }
        num /= 10;
    }

    return (found ? prod : 0);
}