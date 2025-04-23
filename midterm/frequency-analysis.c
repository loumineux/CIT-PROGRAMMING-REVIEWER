#include <stdio.h>

void analyzeFreq(int arr[], int size);

int main(void)
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    analyzeFreq(arr, size);

    return 0;
}

void analyzeFreq(int arr[], int size)
{
    int counted[size]; // to track if a value was already printed
    for (int i = 0; i < size; i++)
    {
        counted[i] = 0;
    }

    printf("Value, Frequency, Percentage\n");

    for (int i = 0; i < size; i++)
    {
        if (counted[i]) continue;

        int count = 1;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                counted[j] = 1; // mark as counted
            }
        }

        float percent = (count * 100.0) / size;
        printf("(%d, %d, %.2f%%)\n", arr[i], count, percent);
    }
}