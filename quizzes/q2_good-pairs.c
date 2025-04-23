#include <stdio.h>

int goodPairs(int arr[], int size);

int main(void)
{
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int arr[size];
    
    printf("Enter array elements: \n");
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
        
    printf("Number of Good Pairs: %d", goodPairs(arr, size));
    
    return 0;
}

int goodPairs(int arr[], int size)
{
    int pair = 0;
    
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if(arr[i] == arr[j] && i < j)
            {
                pair++;
            }
        }
    }
    return pair;
}