#include <stdio.h>

void getArr(int arr[], int size);
int countOccurrences(int arr[], int size, int num);

int main(void)
{
    int size, num;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    
    getArr(arr, size);

    printf("Enter the integer N to count its occurrences: ");
    scanf("%d", &num);
    
    int count = countOccurrences(arr, size, num);
    printf("The number of occurrences of %d in the array is: %d", num, count);
    
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

int countOccurrences(int arr[], int size, int num)
{
    int count = 0;
    //if (count == 0) return 0;
    
    for (int i = 0; i < size; i++)
    {
        if (num == arr[i])
        {
            count++;
        }
    }
    return count;
}