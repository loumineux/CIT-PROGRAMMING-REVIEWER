#include <stdio.h>

#define MAX_SIZE 100

void alternate_ends(int *arr, int size);
void print_array(int *arr, int size);

int main() 
{
    int array[MAX_SIZE];
    int size;

    printf("Enter number of elements: ");
    scanf("%d", &size);

    if (size <= 0 || size > MAX_SIZE) {
        printf("Invalid size.\n");
        return 1;
    }

    printf("Enter %d integer values:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    alternate_ends(array, size);

    printf("Reordered array (paired ends):\n");
    print_array(array, size);

    return 0;
}

void alternate_ends(int *arr, int size) 
{
    int temp[MAX_SIZE];
    int left = 0, right = size - 1;
    int index = 0;

    while (left < right) 
    {
        temp[index++] = arr[left++];
        temp[index++] = arr[right--];
    }

    if (left == right) 
    {
        temp[index++] = arr[left];
    }

    for (int i = 0; i < size; i++) 
    {
        arr[i] = temp[i];
    }
}

void print_array(int *arr, int size) 
{
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}