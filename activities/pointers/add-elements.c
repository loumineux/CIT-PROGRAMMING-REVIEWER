#include <stdio.h>
#include <stdlib.h>

void addElement(int **arr, int *size, int value);

int main() {
    int size, value;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int *arr = (int *)malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    printf("Enter the value to be added: ");
    scanf("%d", &value);

    addElement(&arr, &size, value);

    printf("Updated array:\n");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    free(arr); // clean up
    return 0;
}

void addElement(int **arr, int *size, int value) {
    // Increase the size
    *arr = (int *)realloc(*arr, (*size + 1) * sizeof(int));
    if (*arr == NULL) {
        printf("Memory reallocation failed.\n");
        exit(1);
    }

    (*arr)[*size] = value; // Add the new value at the end
    (*size)++;             // Update the size
}