#include <stdio.h>

void swap(int *a, int *b) {int t = *a; *a = *b; *b = t;}
void reverseK(int *arr, int size, int k);

int main(void)
{
    int size, k;
    printf("Enter the size: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the array: \n");
    for (int i = 0; i < size; i++) scanf("%d", &arr[i]);

    printf("Enter the number of elements you want to group: ");
    scanf("%d", &k);

    reverseK(arr, size, k);

    return 0;
}
void reverseK(int *arr, int size, int k)
{
    for (int i = 0; i < size; i += k)
    {
        int *left = arr + i;
        int group = (i + k - 1 < size) ? (i + k - 1) : (size - 1);
        int *right = arr + group;

        while (left < right)
        {
            swap(left, right);

            left++;
            right--;
        }
    }

    for (int i = 0; i < size; i++)
        printf("%d ", *(arr + i));
}
void reverseKCharles(int* arr, int size, int k)
{
    {
        for (int i = 0; i < size; i += k)
        {
            int left = i;
            int right;
            // to handle case when k is not multiple of n
            if(i+k-1<size-1)
            right = i+k-1;
            else
            right = size-1;
    
            // reverse the sub-array [left, right]
            while (left < right)
                {
                    // swap
                    int temp = arr[left];
                    arr[left] = arr[right];
                    arr[right] = temp;
                    left++;
                    right--;
                }
        }
    }
}