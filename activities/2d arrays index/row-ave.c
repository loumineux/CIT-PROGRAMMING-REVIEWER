#include <stdio.h>

int main(void)
{
    int row, col;
    
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    
    printf("Enter the number of columns: ");
    scanf("%d", &col);
    
    int arr[10][10];
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Element at [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    
    int count = 0;
    float ave;
    
    printf("Averages of each row: \n");
    for (int i = 0; i < row; i++)
    {
        float sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
            ave = sum / col;
        }
        printf("Row %d: %.2f\n", i + 1, ave);
    }
    
    return 0;
}