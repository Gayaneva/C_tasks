#include <stdio.h>

int main() {
    float celsius = 0.0;
    float fahrenheit = 0.0;

   
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}

