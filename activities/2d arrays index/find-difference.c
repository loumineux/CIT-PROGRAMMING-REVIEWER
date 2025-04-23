#include <stdio.h>

int main(void)
{
    int row, col;
    
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    
    printf("Enter the number of columns: ");
    scanf("%d", &col);
    
    int arr1[row][col];
    int arr2[row][col];
    
    printf("Enter the elements of the first array: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Element at [%d][%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    
    printf("Enter the elements of the second array: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Element at [%d][%d]: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }
    
    int count = 0;
    

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr1[i][j] != arr2[i][j])
            count++;
        }
    }
    printf("Number of differences between the two matrices: %d", count);
    
    return 0;
}