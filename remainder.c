#include <stdio.h>

int main() {
    int num1 = 0;
    int num2 = 0;
    int remainder = 0;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    remainder = num1 % num2;

    printf("Remainder: %d\n", remainder);

    return 0;
}

