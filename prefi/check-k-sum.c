#include <stdio.h>

#define MAX_SIZE 100

int count_pairs_with_sum(int *arr, int size, int k);

int main() 
{
    int array[MAX_SIZE];
    int size, i;
    int k;

    printf("Enter number of elements: ");
    scanf("%d", &size);

    printf("Enter %d int values:\n", size);
    for (i = 0; i < size; i++) scanf("%d", &array[i]);

    printf("Enter value of k: ");
    scanf("%d", &k);

    printf("Sum: %d", k);
    int count = count_pairs_with_sum(array, size, k);
    printf("Number of pairs with sum %d: %d\n", k, count);

    return 0;
}

int count_pairs_with_sum(int *arr, int size, int k) 
{
    int count = 0;

    for (int i = 0; i < size - 1; i++)
        for (int j = i + 1; j < size; j++)
            if ((*(arr + i) + *(arr + j)) == k)
                count++;

    return count;
}