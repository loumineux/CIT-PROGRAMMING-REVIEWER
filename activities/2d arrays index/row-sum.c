#include <stdio.h>

int main(void)
{
    int row, col;
    
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    
    printf("Enter the number of columns: ");
    scanf("%d", &col);
    
    int arr[10][10];
    
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Element at [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Sum of each row: \n");
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
         printf("%d\n", sum);
    }
    
    return 0;
}