#include <stdio.h>

void insert(int *arr, int size, int index, int value);

int main(void)
{
    int size, index, value;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size + 1];
    
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
        
    printf("Enter the index where you want to insert the element: ");
    scanf("%d", &index);
    
    if (index < 0 || index > size)
    {
        printf("Invalid index.");
        return 0;
    }
    
    printf("Enter the value you want to insert: ");
    scanf("%d", &value);
    
    insert(arr, size, index, value);
    size++;
    
    printf("The modified array is: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    
    return 0;
}

void insert(int *arr, int size, int index, int value)
{
    int *p = arr;
    
    for (int i = size - 1; i >= index; i--)
    {
        *(p + i + 1) = *(p + i);
    }
    *(p + index) = value;
}