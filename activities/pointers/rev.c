#include <stdio.h>
#include <string.h>

void reverseString(char *str, int length);

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline if present
    int len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    reverseString(str, len);

    printf("Reversed string: %s\n", str);
    return 0;
}

void reverseString(char *str, int length) {
    char *start = str;
    char *end = str + length - 1;

    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}