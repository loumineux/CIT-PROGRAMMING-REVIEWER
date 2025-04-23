#include <stdio.h>

void getArr(int arr[], int size);
int checkDup(int arr[], int size);

int main(void)
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    getArr(arr, size);

    int result = checkDup(arr, size);
    if (result == 1)
        printf("Duplicate found\n");
    else
        printf("No duplicates\n");

    return 0;
}

void getArr(int arr[], int size)
{
    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int checkDup(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                return 1; // duplicate found
            }
        }
    }
    return 0; // no duplicates
}