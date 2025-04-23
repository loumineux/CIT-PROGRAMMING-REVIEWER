#include <stdio.h>

int main(void)
{
    int row = 5, col = 5;
    int num = 1;

    int arr[row][col];
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", num++);
            arr[i][j]++;
        }
        printf("\n");
    }
    
    return 0;
}