#include <stdio.h>

int maxVal(int *arr, int size);

int main(void)
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter %d integers: \n", size);
    for (int *i = arr; i < arr + size; i++)
        scanf("%d", i);
        
    printf("Maximum value in the array is: %d", maxVal(arr, size));
    
    return 0;
}


int maxVal(int *arr, int size)
{
    int *max = arr;
    for (int *i = arr; i < arr + size; i++)
    {
        if (*i > *max)
            max = i;
    }
    return *max;
}