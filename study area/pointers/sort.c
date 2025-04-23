#include <stdio.h>

void sort(int *a, int *b);
void sortAsc(int *arr, int size);

int main(void)
{
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int arr[size];
    
    printf("Enter elements of array: ");
    for (int *i = arr; i < arr + size; i++)
        scanf("%d", i);
        
    sortAsc(arr, size);
    printf("Sorted array in ascending order: ");
    for (int *i = arr; i < arr + size; i++)
        printf("%d ", *i);
    
    return 0;
}


void sort(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortAsc(int *arr, int size)
{
    for (int *i = arr; i < arr + size - 1; i++)
    {
        int swapped = 0;
        
        for (int *j = arr; j < arr + size - (i - arr) - 1; j++)
        {
            if (*j > *(j + 1))
            {
                sort(j, j + 1);
                swapped = 1;
            }
        }
        if (!swapped)
            break;
    }
}