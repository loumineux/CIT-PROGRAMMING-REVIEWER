#include <stdio.h>

int sum(int *arr, int size);

int main(void)
{
    int size;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter the elements of the array: ");
    for (int *i = arr; i < arr + size; i++)
        scanf("%d", i);
        
    printf("The sum of the elements in the array is: %d", sum(arr, size));
    
    return 0;
}


int sum(int *arr, int size)
{
    int sumNum = 0;
    
    for (int *i = arr; i < arr + size; i++)
    {
        sumNum += *i;
    }
    return sumNum;
}