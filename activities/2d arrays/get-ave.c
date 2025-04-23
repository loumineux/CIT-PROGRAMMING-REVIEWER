#include <stdio.h>

float average(int rows, int cols, float arr[][100]) {
    float sum = 0;
    int count = rows * cols;

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            sum += arr[i][j];

    return sum / count;
}

int main() {
    int rows, cols;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    float arr[100][100];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%f", &arr[i][j]);

    float result = average(rows, cols, arr);
    printf("Average: %.2f\n", result);

    return 0;
}