#include <stdio.h>

int main() {
    float num1 = 0.0;
    float num2 = 0.0;
    float num3 = 0.0;
    float total = 0.0;
    float average = 0.0;

    printf("Enter three numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    total = num1 + num2 + num3;
    average = total / 3;

    printf("Total: %.2f\n", total);
    printf("Average: %.2f\n", average);

    return 0;
}

