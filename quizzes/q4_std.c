#include <stdio.h>
#include <math.h>

void getArr(int *arr, int size);
float std(int *arr, int size);

int main(void)
{
    int size;
    printf("Enter number of elements: ");
    scanf("%d", &size);
    
    int arr[size];
    getArr(arr, size);
    
    printf("Standard deviation = %.2f", std(arr, size));
    
    return 0;
}

void getArr(int *arr, int size)
{
    printf("Enter %d elements: \n", size);
    for (int i = 0; i < size; i++)
        scanf("%d", arr + i);
}

float std(int *arr, int size)
{
    float sum = 0;
    float mean, diff, var, std;
    
    for (int i = 0; i < size; i++)
    {
        sum += *(arr + i);
    }
    
    mean = sum / size;
    
    for (int i = 0; i < size; i++)
    {
        diff = *(arr + i) - mean;
        diff *= diff;
        var += diff;
    }
    
    std = sqrt(var / size);
    
    return std;
}