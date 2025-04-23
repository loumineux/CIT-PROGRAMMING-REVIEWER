#include <stdio.h>

#define MAX_SIZE 100

void alternate_pos_neg(int *arr, int size);
void print_array(int *arr, int size);

int main() {
    int array[MAX_SIZE];
    int size;

    printf("Enter number of elements: ");
    scanf("%d", &size);

    printf("Enter elements of aray:\n");
    for (int i = 0; i < size; i++) scanf("%d", &array[i]);

    alternate_pos_neg(array, size);

    printf("Rearranged negative and positive numbers:\n");
    print_array(array, size);

    return 0;
}

void alternate_pos_neg(int *arr, int size) 
{
    int pos[MAX_SIZE], neg[MAX_SIZE];
    int p = 0, n = 0;

    for (int i = 0; i < size; i++) 
    {
        if (*(arr + i) >= 0)    
            *(pos + p++) = *(arr + i);
        else                    
            *(neg + n++) = *(arr + i);
    }

    int i = 0, pp = 0, nn = 0;

    while (pp < p && nn < n) 
    {
        *(arr + i++) = pos[pp++];
        *(arr + i++) = neg[nn++];
    }

    while (pp < p) *(arr + i++) = *(pos + pp++);
    while (nn < n) *(arr + i++) = *(neg + nn++);
}

void print_array(int *arr, int size) 
{
    for (int i = 0; i < size; i++) printf("%d ", *(arr + i));
    printf("\n");
}