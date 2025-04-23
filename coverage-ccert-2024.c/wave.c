#include <stdio.h>

void swap(int *a, int *b) {int t = *a; *a = *b; *b = t;}
void sortWave(int *arr, int size);
void sort(int *arr, int size);

int main(void)
{
    int size;
    printf("Enter size: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter array: \n");
    for (int i = 0; i < size; i++) scanf("%d", &arr[i]);

    sortWave(arr, size);

    return 0;
}

void sort(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - i - 1; j++)
            if (*(arr + j) < *(arr + j + 1))
                swap(arr + j, arr + j + 1);
}

void sortWave(int *arr, int size)
{
    // Traverse all even elements
    for (int i = 0; i < size; i+=2)
    {
        // If current even element is smaller than previous
        if (i > 0 && arr[i - 1] > arr[i] )
            swap(&arr[i], &arr[i - 1]);

        // If current even element is smaller than next
        if (i < size - 1 && arr[i] < arr[i + 1] )
            swap(&arr[i], &arr[i + 1]);
    }

    for (int i = 0; i < size; i++)
        printf("%d ", *(arr + i));
}