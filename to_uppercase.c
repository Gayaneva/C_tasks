#include <stdio.h>

int main() {
    char c = 0;
    printf("Enter a lowercase letter: ");
    scanf(" %c", &c);

    char upper = c - 32; 
    printf("Uppercase: %c\n", upper);

    return 0;
}

