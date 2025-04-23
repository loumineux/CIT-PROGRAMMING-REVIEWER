#include <stdio.h>

#define MAX_SIZE 100

void check_bounds(double *arr, int size, double x, double y);
int is_within_bounds(double value, double x, double y);

int main() 
{
    double array[MAX_SIZE];
    int size, i;
    double x, y;

    printf("Enter number of elements: ");
    scanf("%d", &size);

    printf("Enter %d double values:\n", size);
    for (i = 0; i < size; i++) scanf("%lf", &array[i]);

    printf("Enter x bound x: ");
    scanf("%lf", &x);
    printf("Enter y bound y: ");
    scanf("%lf", &y);
    
    printf("Results:\n");

    check_bounds(array, size, x, y);

    return 0;
}

void check_bounds(double *arr, int size, double x, double y)
{
    for (int i = 0; i < size; i++)
    {
        if (is_within_bounds(*(arr + i), x, y))
            printf("Array #%d = YES\n", i);
        else
            printf("Array #%d = NO\n", i);
    }
}

int is_within_bounds(double value, double x, double y) 
{
    return value >= x && value <= y;
}