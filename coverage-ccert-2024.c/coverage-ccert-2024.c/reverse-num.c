#include <stdio.h>

int reverseNumber(int num, int rev);

int main(void) {
    int num;
    printf("Enter a number to reverse: ");
    scanf("%d", &num);

    int result = reverseNumber(num, 0);
    printf("Reversed number: %d\n", result);

    return 0;
}

int reverseNumber(int num, int rev) {
    if (num == 0)
        return rev;
    return reverseNumber(num / 10, rev * 10 + num % 10);
}