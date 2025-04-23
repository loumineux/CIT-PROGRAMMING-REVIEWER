#include <stdio.h>

int count_digit_occurrences(int num, int digit);

int main(void)
{
    int num, digit, result;

    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Enter the digit to count: ");
    scanf("%d", &digit);

    result = count_digit_occurrences(num, digit);
    printf("Digit %d occurs %d times in %d\n", digit, result, num);

    return 0;
}

int count_digit_occurrences(int num, int digit)
{
    if (num == 0)
        return 0;

    int rem = num % 10;
    if (rem == digit)
        return 1 + count_digit_occurrences(num / 10, digit);
    else
        return count_digit_occurrences(num / 10, digit);
}