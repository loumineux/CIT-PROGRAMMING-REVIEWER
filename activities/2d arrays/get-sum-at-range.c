#include <stdio.h>
#include <math.h>

int sumAtRange(int rows, int cols, float arr[][100], int start, int end) {
    int total = 0;
    int index = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (index >= start && index <= end) {
                total += (int)floor(arr[i][j]);
            }
            index++;
        }
    }

    return total;
}

int main() {
    int rows, cols, start, end;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    float arr[100][100];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%f", &arr[i][j]);

    printf("Enter start index: ");
    scanf("%d", &start);
    printf("Enter end index: ");
    scanf("%d", &end);

    int result = sumAtRange(rows, cols, arr, start, end);
    printf("Sum: %d\n", result);

    return 0;
}