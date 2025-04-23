#include <stdio.h>

int findMax(int *arr, int size);

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int max = findMax(arr, size);
    printf("The maximum value in the array is %d\n", max);

    return 0;
}

int findMax(int *arr, int size) {
    int max = *arr;  // start with the first element

    for (int i = 1; i < size; i++) {
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }

    return max;
}