#include <stdio.h>
#include <stdlib.h>

void deleteElement(int **arr, int *size, int *value);

int main() {
    int size, value;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int *arr = (int *)malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    printf("Enter the value of the element to be deleted: ");
    scanf("%d", &value);

    deleteElement(&arr, &size, &value);

    printf("The updated array is: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    free(arr);
    return 0;
}

void deleteElement(int **arr, int *size, int *value) {
    int found = 0;

    for (int i = 0; i < *size; i++) {
        if ((*arr)[i] == *value) {
            found = 1;
            // Shift elements left
            for (int j = i; j < *size - 1; j++) {
                (*arr)[j] = (*arr)[j + 1];
            }
            (*size)--;
            break;  // Remove only the first occurrence
        }
    }

    if (found) {
        *arr = (int *)realloc(*arr, (*size) * sizeof(int));
        if (*arr == NULL && *size > 0) {
            printf("Memory reallocation failed.\n");
            exit(1);
        }
    } else {
        printf("Value not found in the array.\n");
    }
}