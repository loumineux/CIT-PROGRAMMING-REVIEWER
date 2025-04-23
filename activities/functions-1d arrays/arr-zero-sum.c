#include <stdio.h>

void getArr(int arr[], int size);
void arrayZeroSum(int arr[], int size);

int main(void)
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    
    getArr(arr, size);
    arrayZeroSum(arr, size);
    
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

void arrayZeroSum(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == 0)
            {
                printf("The array has two elements that sum to zero.\n");
                return;
            }
        }
    }
    printf("The array does not have two elements that sum to zero.\n");
}