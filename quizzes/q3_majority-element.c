#include <stdio.h>

void dispMajority(int arr[], int size);

int main(void)
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array separated by space:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    dispMajority(arr, size);

    return 0;
}

void dispMajority(int arr[], int size)
{
    int count;

    for (int i = 0; i < size; i++)
    {
        count = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        if (count > size / 2)
        {
            printf("The majority element is %d\n", arr[i]);
            return;
        }
    }

    printf("No majority element found\n");
}