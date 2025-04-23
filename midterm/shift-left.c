#include <stdio.h>

void shift(int arr[], int size, int pos);

int main() {
    int size, pos;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    printf("Enter the number of positions to shift the array: ");
    scanf("%d", &pos);

    shift(arr, size, pos);

    printf("Shifted array: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

void shift(int arr[], int size, int pos) {
    int result[size];
    
    // Normalize the shift value to fit within array size
    pos = pos % size;
    
    // Convert right shift to equivalent left shift
    if (pos < 0)
        pos = size + pos;

    for (int i = 0; i < size; i++) {
        int newIndex = (i + pos) % size;
        result[newIndex] = arr[i];
    }

    // Copy result back to original array
    for (int i = 0; i < size; i++) {
        arr[i] = result[i];
    }
}