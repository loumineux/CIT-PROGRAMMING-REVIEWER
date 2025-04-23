#include <stdio.h>
#include <math.h>

int determineNum(float n, int pos);

int main(void)
{
    float n;
    int pos;

    printf("Enter the number: ");
    scanf("%f", &n);

    printf("Enter the decimal position: ");
    scanf("%d", &pos);

    printf("Decimal value at decimal position %d is %d\n", pos, determineNum(n, pos));

    return 0;
}

int determineNum(float n, int pos)
{
    n = n - (int)n;
    for (int i = 0; i < pos; i++)
    {
        n *= 10;
    }
    return ((int)n) % 10;