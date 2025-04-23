#include <stdio.h>

void swap(int *a, int *b);
void swapIndex(int *arr, int size);

int main(void)
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    
    printf("Enter the elements of the array: ");
    for (int *i = arr; i < arr + size; i++)
        scanf("%d", i);
    
    swapIndex(arr, size);
    
    printf("The array after swapping: ");
    for (int *i = arr; i < arr + size; i++)
        printf("%d ", *i);
    printf("\n");
    
    return 0;
}


void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapIndex(int *arr, int size)
{
    int ind1, ind2;
    
    printf("Enter the indices of the elements to swap: ");
    scanf("%d %d", &ind1, &ind2);
    
    swap(&arr[ind1], &arr[ind2]);
}