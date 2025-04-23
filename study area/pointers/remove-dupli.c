#include <stdio.h>
#include <stdlib.h>

int getSize();
void readArr(int *arr, int size);
int getUnq(int *arr, int size);

int main()
{
    int size = getSize();
    int *arr = malloc(size * sizeof(int));
    
    if (arr == NULL) printf("Allocation Failed!");
    else
    {
        printf("Enter the elements of the array: ");
        readArr(arr, size);
    }
    
    printf("The unique elements in the array are: ");
    int result = getUnq(arr, size);
    for (int i = 0; i < result; i++)
        printf("%d ", arr[i]);
    
    free(arr);
    
    return 0;
}

int getSize()
{
    int size;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    return size;
}

void readArr(int *arr, int size)
{
    for (int i = 0; i < size; i++)
        scanf("%d", arr + i);
}

int getUnq(int *arr, int size)
{
    int k = 0; 
    
    for (int i = 0; i < size; i++)
    {
        int is_dupli = 0;
        for (int j = 0; j < k; j++)
        {
            if (arr[i] == arr[j])
            {
                is_dupli = 1;
                break;
            }
        }
        
        if (!is_dupli)
            arr[k++] = arr[i];
    }
    
    return k;
}