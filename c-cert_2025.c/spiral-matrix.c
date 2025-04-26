#include <stdio.h>

void printSpiral(int  size, int arr[size][size]);
void display(int  size, int arr[size][size]);

int main(void)
{
    int size;
    printf("Enter the size of the matrix: ");
    scanf("%d", &size);

    int arr[size][size];

    printSpiral(size, arr);
    printf("This is the spiral matrix: \n");
    display(size, arr);

    return 0;
}

void printSpiral(int  size, int arr[size][size])
{
    int top = 0, bottom = size - 1;
    int left = 0, right = size - 1;
    int num = 1;

    while (left <= right && top <= bottom)
    {
        for (int i = left; i <= right; i++)
        {
            arr[top][i] = num++;
        }
        top++;

        for (int i = top; i <= bottom; i++)
        {
            arr[i][right] = num++;
        }
        right--;

        if (left <= right)
        {
            for (int i = right; i >= left; i--)
            {
                arr[bottom][i] = num++;
            }
            bottom--;
        }

        if (top <= bottom)
        {
            for (int i = bottom; i >= top; i--)
            {
                arr[i][left] = num++;
            }
            left++;
        }
    }
}

void display(int  size, int arr[size][size])
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d\t", arr[i][j]);
        }

        printf("\n\n");
    }
}