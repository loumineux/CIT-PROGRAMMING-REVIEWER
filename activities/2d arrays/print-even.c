#include <stdio.h>

void printEven(int rows, int cols, int arr[][100]) {
    int first = 1;
    printf("Even Values:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] % 2 == 0) {
                if (!first) {
                    printf(", ");
                }
                printf("%d", arr[i][j]);
                first = 0;
            }
        }
    }
    printf("\n");
}

int main() {
    int rows, cols;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int arr[100][100];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &arr[i][j]);

    printEven(rows, cols, arr);

    return 0;
}