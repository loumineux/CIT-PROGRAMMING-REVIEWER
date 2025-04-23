#include <stdio.h>
#include <stdbool.h>

bool isSymmetric(int arr[][100], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i][j] != arr[j][i]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int size;
    printf("Enter the size of the square array: ");
    scanf("%d", &size);

    int arr[100][100];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            scanf("%d", &arr[i][j]);

    if (isSymmetric(arr, size))
        printf("The array is symmetric.\n");
    else
        printf("The array is not symmetric.\n");

    return 0;
}