#include <stdio.h>

int swap(int *a, int *b);
void swapPointer(int *p1, int *p2);

int main(void)
{
    int x, y;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    
    printf("Before swap: %d %d\n", x, y);
    swapPointer(&x, &y);
    
    return 0;
}

void swapPointer(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    
    
    printf("After swap: %d %d\n", *p1, *p2);
}