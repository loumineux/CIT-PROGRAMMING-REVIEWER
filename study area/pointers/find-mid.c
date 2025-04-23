#include <stdio.h>

int mid(int *arr, int size);

int main(void)
{
    int size;
    
    printf("Enter size of array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Enter elements of array: ");
    for (int *ptr = arr; ptr < arr + size; ptr++)
        scanf("%d", ptr);
        
    printf("Middle element of array is: %d", mid(arr, size));
    
    return 0;
}

int mid(int *arr, int size)
{
    return *(arr + (size - 1) / 2);
}