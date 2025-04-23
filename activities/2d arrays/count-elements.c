#include <stdio.h>

int countOccurrences(int arr[][100], int rows, int cols, int target) {
    int count = 0;
    
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            if (arr[i][j] == target)
                count++;

    return count;
}

int main() {
    int rows, cols, target;
    printf("Enter the dimensions of the 2D array: ");
    scanf("%d %d", &rows, &cols);

    int arr[100][100];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &arr[i][j]);

    printf("Enter the target integer: ");
    scanf("%d", &target);

    int result = countOccurrences(arr, rows, cols, target);
    printf("The number of times %d appears in the array is: %d\n", target, result);

    return 0;
}