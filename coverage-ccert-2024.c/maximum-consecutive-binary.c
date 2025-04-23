// Online C compiler to run C program online
#include <stdio.h>


// My solution:
int findMostFrequentElement(int* arr, int size);
int findMaxContiguousCount (int* arr, int size);

// MOST OPTIMAL SOLUTION YAWA!
int findMaxContiguousCountOptimal (int* arr, int size);
int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter the elements of the array: ");
    for (int i = 0; i<size; i++)
    {
        scanf("%d", arr+i);
    }
    
    printf("The maximum consecutive apperance of the element with that is most frequent is: %d", findMaxContiguousCount(arr, size));
    
    printf("\nAnswer using the optimal solution: %d", findMaxContiguousCountOptimal(arr, size));
    return 0;
}
int findMaxContiguousCountOptimal (int* arr, int size)
{
     int maxCount = 0;
    int count = 1;

    for (int i = 1; i < size; i++) {
        if (arr[i] == arr[i - 1]) {
            count++;
        } else {
            if (count > maxCount)
                maxCount = count;
            count = 1;
        }
    }

    if (count > maxCount)
        maxCount = count;

    return maxCount;
}
int findMostFrequentElement(int* arr, int size)
{
    // find what si the most frequent element in the array:
    
    int maxCount = 0;
    int el;
    for (int i = 0; i<size; i++)
    {
        int count = 0;
            for (int j = 0; j<size; j++)
            {
                if (arr[i]==arr[j])
                {
                    count++;
                }
            }
            if (count>maxCount)
            {
            maxCount = count;
            el = arr[i];
            }
    }
       return el;
 }
int findMaxContiguousCount (int* arr, int size)
{
    int baseElement = findMostFrequentElement(arr, size);
    
    int maxCount = 0;
    int count = 0;
    for (int i = 0; i<size; i++)
    {
        if (*(arr+i)==baseElement)
        {
            count++;
        }
        if (count>maxCount)
        {
            maxCount = count;
        }
        if (*(arr+i)!=baseElement)
        {
            count = 0;
        }
    }
    return maxCount;
}