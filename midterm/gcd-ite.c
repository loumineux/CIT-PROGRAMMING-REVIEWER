#include <stdio.h>

int gcd(int a, int b);

int main(void)
{
    int num1, num2;
    printf("Enter two numbers: \n");
    scanf("%d %d", &num1, &num2);
    
    printf("The GCD of %d and %d is: %d", num1, num2, gcd(num1, num2));
    
    return 0;
}

int gcd(int a, int b)
{
    while (a != 0)
    {
    if (b == 0) return a;
    
    return gcd(b, a % b);
    }
}