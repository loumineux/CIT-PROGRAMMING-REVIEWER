#include <stdio.h>

void getArray(int arr[], int size);
void sortArray(int arr[], int size);
int thirdSmallest(int arr[], int size);

int main(void) {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    getArray(arr, size);

    if (size < 3) {
        printf("Array must have at least 3 elements.\n");
    } else {
        printf("3rd smallest element: %d\n", thirdSmallest(arr, size));
    }

    return 0;
}

void getArray(int arr[], int size) {
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
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

int thirdSmallest(int arr[], int size) {
    sortArray(arr, size);
    return arr[2];
}