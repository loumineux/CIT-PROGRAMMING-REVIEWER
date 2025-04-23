#include <stdio.h>

void getArray(int arr[], int size);
void mergeAndSort(int a[], int b[], int merged[], int sizeA, int sizeB);
void sortArray(int arr[], int size);

int main(void) {
    int size1, size2;
    printf("Enter size of first array: ");
    scanf("%d", &size1);
    int a[size1];
    getArray(a, size1);

    printf("Enter size of second array: ");
    scanf("%d", &size2);
    int b[size2];
    getArray(b, size2);

    int merged[size1 + size2];
    mergeAndSort(a, b, merged, size1, size2);

    printf("Merged and sorted array: ");
    for (int i = 0; i < size1 + size2; i++)
        printf("%d ", merged[i]);
    printf("\n");

    return 0;
}

void getArray(int arr[], int size) {
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
}

void mergeAndSort(int a[], int b[], int merged[], int sizeA, int sizeB) {
    for (int i = 0; i < sizeA; i++) merged[i] = a[i];
    for (int i = 0; i < sizeB; i++) merged[sizeA + i] = b[i];
    sortArray(merged, sizeA + sizeB);
}

void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++)
        for (int j = i + 1; j < size; j++)
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
}