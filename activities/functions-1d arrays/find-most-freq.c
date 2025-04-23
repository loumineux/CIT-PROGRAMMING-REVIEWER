#include <stdio.h>

int findMostFrequentElement(int arr[], int size) {
    int maxCount = 0;
    int mostFreq = arr[0];

    for (int i = 0; i < size; i++) {
        int count = 1;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > maxCount) {
            maxCount = count;
            mostFreq = arr[i];
        }
    }

    return mostFreq;
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[100];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    int result = findMostFrequentElement(arr, size);
    printf("The most frequent element in the array is %d\n", result);

    return 0;
}