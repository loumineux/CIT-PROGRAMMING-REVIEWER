#include <stdio.h>

#define MAX_SIZE 100

void alternate_max_min(int *arr, int size);
void print_array(int *arr, int size);
void sort_array(int *arr, int size);
void swap(int *a, int *b);

int main() {
    int array[MAX_SIZE];
    int size;

    printf("Enter number of elements: ");
    scanf("%d", &size);

    printf("Enter the elements of array: ");
    for (int i = 0; i < size; i++) scanf("%d", &array[i]);

    alternate_max_min(array, size);

    printf("Rearranged Max/Min:\n");
    print_array(array, size);

    return 0;
}

void alternate_max_min(int *arr, int size) 
{
    int temp[MAX_SIZE];

    sort_array(arr, size); 

    int low = 0, high = size - 1;
    int i = 0;

    while (low <= high) 
    {
        if (i < size) temp[i++] = arr[high--];
        if (i < size) temp[i++] = arr[low++]; 
    }

    for (int j = 0; j < size; j++) arr[j] = temp[j];
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort_array(int *arr, int size) 
{
    for (int i = 0; i < size - 1; i++) 
        for (int j = 0; j < size - i - 1; j++) 
            if (*(arr + j) > *(arr + j + 1)) 
                swap(arr + j, arr + j + 1);
}

void print_array(int *arr, int size) 
{
    for (int i = 0; i < size; i++) printf("%.2f ", *(arr + i));
    printf("\n");
}