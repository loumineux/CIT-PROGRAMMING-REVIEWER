#include <stdio.h>

void leader(int arr[], int size);

int main(void)
{
    int size;
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements: \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Leaders: \n");
    leader(arr, size);

    return 0;
}

void leader(int arr[], int size)
{
    int maxFromRight = arr[size - 1];
    printf("%d ", maxFromRight);

    for (int i = size - 2; i >= 0; i--)
    {
        if (arr[i] > maxFromRight)
        {
            maxFromRight = arr[i];
            printf("%d ", maxFromRight);
        }
    }
    printf("\n");
}