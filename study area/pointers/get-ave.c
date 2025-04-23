#include <stdio.h>

float ave(int *arr, int size);

int main(void)
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    
    printf("Enter the elements of the array: ");
    for (int *i = arr; i < arr + size; i++)
        scanf("%d", i);
        
    printf("The average of the elements in the array is: %.2f", ave(arr, size));
    
    return 0;
}


float ave(int *arr, int size)
{
    float sum = 0.0;
    
    for (int *i = arr; i < arr + size; i++)
    {
        sum += *i;
    }
    return sum / (float)size;
}