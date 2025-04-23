#include <stdio.h>

int findPeakIndex(int arr[], int size) {
    for (int i = 1; i < size - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            return i;
        }
    }
    return -1;
}

int main() {
    int size;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the array elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int peakIndex = findPeakIndex(arr, size);

    if (peakIndex != -1) {
        printf("The peak element is at index %d\n", peakIndex);
    } else {
        printf("No peak element found in the array\n");
    }

    return 0;
}