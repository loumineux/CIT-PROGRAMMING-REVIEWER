#include <stdio.h>

int isMirror(int row, int col, int mat1[row][col], int mat2[row][col]);

int main(void)
{
    int row, col;
    printf("Enter rows and columns: ");
    scanf("%d %d", &row, &col);

    int mat1[row][col], mat2[row][col];

    printf("Enter elements for Matrix 1:\n");
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            scanf("%d", &mat1[i][j]);

    printf("Enter elements for Matrix 2:\n");
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            scanf("%d", &mat2[i][j]);

    if (isMirror(row, col, mat1, mat2))
        printf("Matrix 2 is a mirror of Matrix 1.\n");
    else
        printf("Matrix 2 is NOT a mirror of Matrix 1.\n");

    return 0;
}

int isMirror(int row, int col, int mat1[row][col], int mat2[row][col])
{
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            if (mat1[i][j] != mat2[i][col - 1 - j])
                return 0;

    return 1;
}