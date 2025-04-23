#include <stdio.h>

int numThree(int* n);

int main(void)
{
    int n;
    
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    printf("Value after multiplying by 3: %d", numThree(&n));
    
    return 0;
}

int numThree(int* n)
{
    return *n * 3;
}