#include <stdio.h>

float recursiveSum(int arr[], int size);
float recursiveAverage(int arr[], int size);

int main(void) {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    float avg = recursiveAverage(arr, size);
    printf("Average: %.2f\n", avg);

    return 0;
}

float recursiveSum(int arr[], int size) {
    if (size == 0)
        return 0;
    return arr[size - 1] + recursiveSum(arr, size - 1);
}

float recursiveAverage(int arr[], int size) {
    return recursiveSum(arr, size) / size;
}