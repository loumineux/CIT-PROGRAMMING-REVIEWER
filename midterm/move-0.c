#include <stdio.h>

void getArr(int arr[], int size);
void move(int arr[], int size);

int main(void)
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    
    getArr(arr, size);
    move(arr, size);
    
    return 0;
}


void getArr(int arr[], int size)
{
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < size; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }
} 

void move(int arr[], int size)
{
    printf("Array with zeros moved to the end: ");
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            printf("%d ", arr[i]);
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            printf("%d ", arr[i]);
        }
    }
}