#include <stdio.h>

void getArr(int arr[], int size);
int findMostFrequentElement(int arr[], int size);

int main(void)
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    
    getArr(arr, size);
    int result = findMostFrequentElement(arr, size);
    printf("The most frequent element in the array is %d", result);
    
    return 0;
}

void getArr(int arr[], int size)
{
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int findMostFrequentElement(int arr[], int size)
{
    int max = 0, most_freq;
    for (int i = 0; i < size; i++)
    {
        int count = 1;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > max)
        {
            max = count;
            most_freq = arr[i];
        }
    }
    return most_freq;
}