#include <stdio.h>

void getArr(int arr[], int size);
int sumArray(int arr[], int size);

int main(void)
{
    int size;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    getArr(arr, size);
    int result = sumArray(arr, size);
    printf("The sum of the elements in the array is: %d", result);
    
    return 0;
}


void getArr(int arr[], int size)
{
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int sumArray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}