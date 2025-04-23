#include <stdio.h>

int prod_3_highest(int *arr, int size);
void swap(int *a, int *b);

int main(void)
{
    int size;
    printf("Enter the size: ");
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The product of the 3 highest elements is %d", prod_3_highest(arr, size));

    return 0;
}

int prod_3_highest(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - i - 1; i++)
            if (arr[j] > arr[j + 1])
                swap(arr + j, arr + j + 1);

    int prod = 1;

    prod = arr[size - 1] * arr[size - 2] * arr[size - 3];

    return prod;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}