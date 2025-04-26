#include <stdio.h>

int main(void) {
    int n, count = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    
    for (int i = n; i <= 100; i += n) {
            printf("%d ", i);
            count++;
    }
    
    printf("\nThere are %d numbers divisible by %d from 1 to 100.\n", count, n);
    
    return 0;
}