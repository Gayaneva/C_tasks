#include <stdio.h>

int main() {
    char ch = 0;
    printf("Enter a uppercase letter: ");
    scanf(" %c", &ch);

    char lower = ch + 32;
    printf("Uppercase: %c\n", lower);

    return 0;
}

