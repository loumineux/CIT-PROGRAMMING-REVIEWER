// get-second-max.c
#include <stdio.h>

// Three possible solutions
int getSecondEle(int *arr, int size);
int getSecondLargest(int arr[], int size);
int getSecondThroughSort(int arr[], int size);

int main(void)
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    int result = getSecondEle(arr, size);
    printf("Second maximum value: %d\n", result);

    return 0;
}

int getSecondEle(int *arr, int size)
{   
    if (size < 2) return -1;

    int *max = &arr[0];
    int *secMax = NULL;

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > *max)
        {
            secMax = max;
            max = &arr[i];
        }
        else if ((secMax == NULL || arr[i] > *secMax) && arr[i] < *max)
        {
            secMax = &arr[i];
        }
    }

    return (secMax != NULL) ? *secMax : -1;
}

int getSecondLargest(int arr[], int size)
{
    int largest = -1, secondLargest = -1;

    // Finding the largest element
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest)
            largest = arr[i];
    }

    // Finding the second largest element
    for (int i = 0; i < n; i++) {
        
        // Update second largest if the current element is greater
        // than second largest and not equal to the largest
        if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}

int getSecondThroughSort(int arr[], int size)
{
    //just bubble sort the entire array
    //then get size-2;
}
