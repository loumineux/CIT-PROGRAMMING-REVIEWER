#include <stdio.h>

int findPeakIndex(int arr[], int size);

int main(void)
{
    int size;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    
    int arr[100];
    printf("Enter the array elements: \n");
    for (int i = 0; i < size; i++) scanf("%d", &arr[i]);
    
    int peak = findPeakIndex(arr, size);
    
    if (peak != -1)
        printf("The peak element is at index %d\n", peak);
    else
        printf("No peak element found in the array\n");
    
    return 0;
}

int findPeakIndex(int arr[], int size)
{
    for (int i = 1; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1] && arr[i] > arr[i - 1])
            return i;
    }
    
    return -1;
}