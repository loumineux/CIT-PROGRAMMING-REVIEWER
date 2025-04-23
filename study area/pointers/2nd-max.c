#include <stdio.h>
#include <stdlib.h>

int getSize();
void readArr(int *arr, int size);
int secMax(int *arr, int size);

int main(void)
{
    int size = getSize();
    int *arr = malloc(size * sizeof(int));
    
    if (arr == NULL)
    {
        printf("Allocation failed!");
    }
    else
    {
        printf("Enter the elements of the array: ");
        readArr(arr, size);
    }
    
    int result = secMax(arr, size);
    if (result != -1)
        printf("The second maximum value in the array is: %d\n", result);
    else
        printf("The array has less than two distinct elements.");
    
    return 0;
}

int getSize()
{
    int size;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    return size;
}

void readArr(int *arr, int size)
{
    for (int i = 0; i < size; i++)
            scanf("%d", arr + i);
}

int secMax(int *arr, int size)
{
    if (arr == NULL || size < 2) return -1;
    
    int temp;
    
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (*(arr + j) > *(arr + j + 1))
            {
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
    
    int max = arr[size - 1];
    for (int i = size - 2; i >= 0; i--)
    {
        if (arr[i] < max)
        {
            return arr[i];
        }
    }
    
    return -1;
}