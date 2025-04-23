#include <stdio.h>

void sepOddEven(int arr[], int size);

int main(void)
{
    int size;
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    int arr[size];
    
    for (int i = 0; i < size; i++)
    {
        printf("Element #%d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    sepOddEven(arr, size);
    
    return 0;
}

void sepOddEven(int arr[], int size)
{
    int countEven = 0;
    printf("\nArranged Elements: \n");
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            countEven++;
            printf("Element #%d: %d\n", countEven, arr[i]);
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0)
        {
            countEven++;
            printf("Element #%d: %d\n", countEven, arr[i]);
        }
    }
}