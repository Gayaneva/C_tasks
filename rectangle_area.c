#include <stdio.h>

int main() {
    float length = 0.0;
    float  width = 0.0;
    float  area = 0.0;

   
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

   
    area = length * width;

    printf("The area of the rectangle is: %.2f\n", area);

    return 0;
}

